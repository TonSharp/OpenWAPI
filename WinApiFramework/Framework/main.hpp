﻿#pragma once
#include "libs.hpp"

wstring szMainClass = L"MainClass";
wstring szTitle = L"Title";

Window* wnd;
GLContext* context;

GameObject *dObj;

int Angle;
float zPos;

int MainCallback(CallbackArgs);
void Update();
void MainRenderer();

int _main_(MainArgs args)
{
    dObj = new GameObject();

    wnd = new Window(szTitle, &szMainClass, args);
    wnd->CreateCustomWindow(0, GL_WINDOW, { 10, 10 }, { 800, 600 }, nullptr, nullptr, nullptr, MainCallback);

    context = new GLContext(wnd, 0, 16, 16, MainRenderer);
    context->AddSmooth();
    context->AddAmbienLight({ 255, 255, 255, 255 });

    UpdateCallback.push_back(Update);

    Mouse::Link(wnd);
    Mouse::LockCursor();
    Mouse::HideCursor();

    dObj->LoadMesh("Shrek.obj");
    dObj->LoadTexture("Shrek.tga");

    //dObj->Rotation.X = 90;
    dObj->Transform.Z = -10;
    //dObj->Transform.Y = -0.5;
    dObj->ScaleObject(0.05);

    return 0;
}

int MainCallback(CallbackArgs args)
{
    if (Closing(args) || Keyboard::GetKeyDown(args, VK_ESCAPE))
    {
        Quit();
    }

    return 1;
}

void Update()
{
    context->Render();
}

void MainRenderer()
{
    context->ClearBuffers(0);

    dObj->Rotation.X += Mouse::GetDY();
    dObj->Rotation.Y += Mouse::GetDX();
    dObj->Draw();

    if(context)
        SwapBuffers(context->HDC());
}
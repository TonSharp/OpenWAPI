﻿#pragma once
#include "../Window.hpp"
#include "../Transform.hpp"


#define BORDER WS_BORDER

#define MULTILINE ES_MULTILINE
#define DROPDOWN CBS_DROPDOWN

#define UNRESIZABLE_WINDOW (WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU)

using namespace std;

class UI
{
protected:

	wstring text;
	Window* wndParent;
	HINSTANCE hInstance;

	HWND wnd;

	bool vScroll = false;
	bool hScroll = false;

	DWORD localStyle;

public:

	// UI class.
	UI(wstring text, Window* parent, HINSTANCE hInstance)
	{
		this->text = text;

		if (parent != nullptr)
			wndParent = parent;

		this->hInstance = hInstance;
	}

	// Adds vertical scroll to the window.
	virtual void AddVScroll()
	{
		localStyle |= WS_VSCROLL;
		vScroll = true;
	}
	// Adds horizontal scroll to the window.
	virtual void AddHScroll()
	{
		localStyle |= WS_HSCROLL;
		hScroll = true;
	}

	// Changes the text of the window’s title bar.
	virtual void SetText(wstring text)
	{
		SetWindowText(wnd, text.c_str());
	}

	virtual void Create(DWORD style, Transform pos, Transform size)
	{
	}

	// Returns true if the window has a context menu.
	bool IsContextMenu(CallbackArgs args)
	{
		if (args.Msg == WM_CONTEXTMENU && (HWND)args.wParam == wnd)
			return true;
		else
			return false;
	}

	HWND Get()
	{
		return wnd;
	}

	HWND* GetPointer()
	{
		return &wnd;
	}
};
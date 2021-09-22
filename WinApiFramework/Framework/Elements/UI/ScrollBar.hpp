﻿#pragma once

#include "UI.hpp"

#define HORIZONTAL_SCROLL SBS_HORZ
#define VERTIACL_SCROLL SBS_VERT

class ScrollBar : public UI
{
private:

public:

	// Scroll bar class
	ScrollBar(wstring text, Window* parent, int id, HINSTANCE hInstance, LPVOID lParam) : UI(text, parent, hInstance)	
	{
	}

	// Creates a scroll bar.
	void Create(DWORD style, Transform pos, Transform size) override
	{
		wnd = CreateWindow(L"scrollbar", text.c_str(), WS_CHILD | WS_VISIBLE | style, pos.x, pos.y, size.x, size.y, wndParent->Get(), NULL, hInstance, NULL);
	}

	// Sets scroll position.
	void SetScrollPosition(int pos)
	{
		SetScrollPos(wnd, SB_CTL, pos, TRUE);
	}

	//
	void SendScroll(UI* ui, WPARAM wParam, UINT msg, LPARAM lParam)
	{
		if (msg != WM_VSCROLL && msg != WM_HSCROLL)
			return;

		if ((HWND)lParam != wnd)
			return;

		DWORD direction = LOWORD(wParam);

		if (direction != SB_THUMBPOSITION)
			SendMessage(ui->Get(), WM_VSCROLL, MAKEWPARAM(direction, NULL), 0);

		SetScrollPosition(HIWORD(wParam));
	}
};
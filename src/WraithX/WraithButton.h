#pragma once

#define _AFXDLL // AFX Shared DLL
#define _WIN32_WINNT 0x0601 // Windows 7+

#include <afxwin.h>
#include <string>

// A class that handles a WraithButton
class WraithButton
{
private:
	// -- Custom events

	// Handles painting the WraithButton
	static void OnPaint(HWND hButton, HDC hDC, PAINTSTRUCT& pPaintStruct);

public:
	// Handles the WNDPROC messages for the WraithButton
	static LRESULT CALLBACK WndProcWraithButton(HWND hButton, UINT message, WPARAM wParam, LPARAM lParam, UINT_PTR uIdSubclass, DWORD_PTR dwRefData);
};
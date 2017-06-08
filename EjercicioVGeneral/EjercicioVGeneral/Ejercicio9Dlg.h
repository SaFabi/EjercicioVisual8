#pragma once   //_____________________________________________ Ejercicio9Dlg.h  
#include "resource.h"

class Ejercicio9Dlg : public Win::Dialog
{
public:
	Ejercicio9Dlg()
	{
	}
	~Ejercicio9Dlg()
	{
	}
private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Button btClick;
	Win::Textbox tbxText;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(438);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(185);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		btClick.Create(NULL, L"Click", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 300, 150, 129, 28, hWnd, 1000);
		tbxText.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 302, 103, 129, 25, hWnd, 1001);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		btClick.Font = fontArial014A;
		tbxText.Font = fontArial014A;
	}
	//_________________________________________________
	void btClick_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btClick.IsEvent(e, BN_CLICKED)) { btClick_Click(e); return true; }
		return false;
	}
};

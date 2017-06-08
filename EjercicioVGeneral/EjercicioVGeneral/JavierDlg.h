#pragma once   //_____________________________________________ JavierDlg.h  
#include "resource.h"

class JavierDlg: public Win::Dialog
{
public:
	JavierDlg()
	{
	}
	~JavierDlg()
	{
	}
private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Button btGenerar;
	Win::Textbox tbxTexto;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(5.29167);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(2.06375);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		btGenerar.CreateX(NULL, L"Generar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 1.11125, 1.19063, 3.67771, 0.68792, hWnd, 1000);
		tbxTexto.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 0.79375, 0.21167, 4.31271, 0.60854, hWnd, 1001);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		btGenerar.Font = fontArial009A;
		tbxTexto.Font = fontArial009A;
	}
	//_________________________________________________
	void btGenerar_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btGenerar.IsEvent(e, BN_CLICKED)) {btGenerar_Click(e); return true;}
		return false;
	}
};

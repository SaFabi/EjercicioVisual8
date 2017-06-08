#pragma once  //______________________________________ EjercicioVGeneral.h  
#include "Resource.h"
#include "JavierDlg.h"
class EjercicioVGeneral : public Win::Dialog
{
public:
	EjercicioVGeneral()
	{
	}
	~EjercicioVGeneral()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Button btAngel;
	Win::Button btJavier;
	Win::Button btJesus;
	Win::Button btAdri;
	Win::Button btFabi;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::CentimetersToDlgUnitX(17.75354);
		dlgTemplate.cy = Sys::Convert::CentimetersToDlgUnitY(1.69333);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"EjercicioVGeneral";
		btAngel.CreateX(NULL, L"Angel", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 0.44979, 0.79375, 2.91042, 0.68792, hWnd, 1000);
		btJavier.CreateX(NULL, L"Javier", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 3.91583, 0.82021, 3.25438, 0.68792, hWnd, 1001);
		btJesus.CreateX(NULL, L"Jesus", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 7.67292, 0.76729, 2.48708, 0.68792, hWnd, 1002);
		btAdri.CreateX(NULL, L"Adri", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 10.98021, 0.71437, 3.36021, 0.68792, hWnd, 1003);
		btFabi.CreateX(NULL, L"Fabi", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 14.86958, 0.74083, 2.69875, 0.68792, hWnd, 1004);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		btAngel.Font = fontArial009A;
		btJavier.Font = fontArial009A;
		btJesus.Font = fontArial009A;
		btAdri.Font = fontArial009A;
		btFabi.Font = fontArial009A;
	}
	//_________________________________________________
	void btAngel_Click(Win::Event& e);
	void btJavier_Click(Win::Event& e);
	void btJesus_Click(Win::Event& e);
	void btAdri_Click(Win::Event& e);
	void btFabi_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btAngel.IsEvent(e, BN_CLICKED)) { btAngel_Click(e); return true; }
		if (btJavier.IsEvent(e, BN_CLICKED)) { btJavier_Click(e); return true; }
		if (btJesus.IsEvent(e, BN_CLICKED)) { btJesus_Click(e); return true; }
		if (btAdri.IsEvent(e, BN_CLICKED)) { btAdri_Click(e); return true; }
		if (btFabi.IsEvent(e, BN_CLICKED)) { btFabi_Click(e); return true; }
		return false;
	}
};

#include "stdafx.h"  //________________________________________ EjercicioVGeneral.cpp
#include "EjercicioVGeneral.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	EjercicioVGeneral app;
	return app.BeginDialog(IDI_EjercicioVGeneral, hInstance);
}

void EjercicioVGeneral::Window_Open(Win::Event& e)
{
}

void EjercicioVGeneral::btAngel_Click(Win::Event& e)
{
	AngelDlg objAngel;
	objAngel.BeginDialog(hWnd);
}

void EjercicioVGeneral::btJavier_Click(Win::Event& e)
{
	JavierDlg objDlg;
	objDlg.BeginDialog(hWnd);
}

void EjercicioVGeneral::btJesus_Click(Win::Event& e)
{
	Ejercicio9Dlg jesus;
	jesus.BeginDialog(hWnd);
}

void EjercicioVGeneral::btAdri_Click(Win::Event& e)
{
}

void EjercicioVGeneral::btFabi_Click(Win::Event& e)
{
}


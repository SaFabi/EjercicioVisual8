#include "stdafx.h"  //________________________________________ EjercicioVGeneral.cpp
#include "EjercicioVGeneral.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	EjercicioVGeneral app;
	return app.BeginDialog(IDI_EjercicioVGeneral, hInstance);
}

void EjercicioVGeneral::Window_Open(Win::Event& e)
{
}


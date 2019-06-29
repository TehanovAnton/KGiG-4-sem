#pragma once

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"      

class Clab2App : public CWinApp
{
public:
	Clab2App();
	HBITMAP hBit;
	HWND hwnd;
	CPoint From;
    CPoint To;
	bool bTrack;
	bool SaveAr;

public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

public:
	void LoadImageBMP();
	void SaveArea();
	void SaveAreaBMP();
	void SaveScreen();
	DECLARE_MESSAGE_MAP()
};

extern Clab2App theApp;

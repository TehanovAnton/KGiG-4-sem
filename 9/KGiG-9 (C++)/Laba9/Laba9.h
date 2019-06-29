// Laba9.h : main header file for the Laba9 application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CLaba9App:
// See Laba9.cpp for the implementation of this class
//

class CLaba9App : public CWinApp
{
public:
	CLaba9App();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CLaba9App theApp;

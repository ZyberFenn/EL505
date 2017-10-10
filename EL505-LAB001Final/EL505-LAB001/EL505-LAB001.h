
// EL505-LAB001.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CEL505LAB001App:
// See EL505-LAB001.cpp for the implementation of this class
//

class CEL505LAB001App : public CWinApp
{
public:
	CEL505LAB001App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CEL505LAB001App theApp;
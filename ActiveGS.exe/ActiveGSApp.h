// ActiveGSApp.h : fichier d'en-t�te principal pour l'application ActiveGSApp
//
#pragma once

#ifndef __AFXWIN_H__
	#error inclut 'stdafx.h' avant d'inclure ce fichier pour PCH
#endif

#include "resource.h"       // symboles principaux

// CActiveGSAppApp�:
// Consultez ActiveGSApp.cpp pour l'impl�mentation de cette classe
//

class CActiveGSAppApp : public CWinApp
{
public:
	CActiveGSAppApp();


// Substitutions
public:
	virtual BOOL InitInstance();

// Impl�mentation

public:
//	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CActiveGSAppApp theApp;

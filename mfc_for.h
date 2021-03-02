
// mfc_for.h: главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить pch.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CmfcforApp:
// Сведения о реализации этого класса: mfc_for.cpp
//

class CmfcforApp : public CWinApp
{
public:
	CmfcforApp();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CmfcforApp theApp;


// StreamingMediaTools.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������

// CStreamingMediaToolsApp:
// �йش����ʵ�֣������ StreamingMediaTools.cpp
//

class CStreamingMediaToolsApp : public CWinApp
{
public:
	CStreamingMediaToolsApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CStreamingMediaToolsApp theApp;
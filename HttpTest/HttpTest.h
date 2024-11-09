
// HttpTest.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'pch.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CHttpTestApp:
// このクラスの実装については、HttpTest.cpp を参照してください
//

class CHttpTestApp : public CWinApp
{
public:
	CHttpTestApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern CHttpTestApp theApp;

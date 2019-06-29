#pragma once
#ifdef _DEBUG
#define new DEBUG_NEW
#endif

class CChildView : public CWnd
{

	protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	afx_msg void OnPaint();

	afx_msg void OnLButtonDown(UINT,CPoint);
    afx_msg void OnLButtonUp(UINT,CPoint);

	DECLARE_MESSAGE_MAP()
};


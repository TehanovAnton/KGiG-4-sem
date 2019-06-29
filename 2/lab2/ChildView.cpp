#include "stdafx.h"
#include "LPLab2.h"
#include "ChildView.h"
#include "GraphBitMap.h"


BEGIN_MESSAGE_MAP(CChildView, CWnd)
	ON_WM_PAINT()
	ON_WM_LBUTTONDOWN() 
    ON_WM_LBUTTONUP()
	ON_COMMAND(ID_TEST_IMAGE, &Clab2App::LoadImageBMP)
END_MESSAGE_MAP()



BOOL CChildView::PreCreateWindow(CREATESTRUCT& cs) 
{
	if (!CWnd::PreCreateWindow(cs))
		return FALSE;

	cs.dwExStyle |= WS_EX_CLIENTEDGE;
	cs.style &= ~WS_BORDER;
	cs.lpszClass = AfxRegisterWndClass(CS_HREDRAW|CS_VREDRAW|CS_DBLCLKS, 
		::LoadCursor(NULL, IDC_ARROW), reinterpret_cast<HBRUSH>(COLOR_WINDOW+1), NULL);

	return TRUE;
}

void CChildView::OnPaint() 
{
	CPaintDC dc(this);
	ShowBitMap(theApp.hwnd, theApp.hBit, 0, 0);
}

void CChildView::OnLButtonDown(UINT flags,CPoint point) //метод нажатия левой клавиши мыши
{
	theApp.From = point;
}

void CChildView::OnLButtonUp(UINT flags,CPoint point) //метод освобождения левой кнопки мыши
{
    theApp.To = point;
		theApp.SaveArea();
		
		theApp.From.x = 0;
		theApp.From.y = 0;
		theApp.To.x = 0;
		theApp.To.y = 0;

}

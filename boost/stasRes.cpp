#include<Windows.h>

void  CALLBACK HideWnd(HWND   hwnd,UINT   uMsg,UINT   idEvent,DWORD   dwTime);//回调函数声明

ShowWindow(true);
SetTimer(m_hWnd,1, 1000, HideWnd);

void  CALLBACK HideWnd(HWND   hwnd,UINT   uMsg,UINT   idEvent,DWORD   dwTime)//回调函数
{
	ShowWindow(hwnd, false);
	KillTimer(hwnd,1);
}
#include <windows.h>
int __stdcall WinMain ( HINSTANCE hInstance, HINSTANCE hPrevInstance,
						LPSTR lpszCmdline, int nCmdShow ){
	HWND hWnd = Handle();
	onPaint(hWnd);
}
void OnPaint ( HWND hWnd )
{
	HDC hdc ;
	PAINTSTRUCT ps ;
	HBRUSH hbr ;
	HGDIOBJ holdbr ;
	POINT pt[5] = { 250, 150, 250, 300, 300, 350, 400, 300, 320, 190 } ;
	hdc = BeginPaint ( hWnd, &ps ) ;
	hbr = CreateSolidBrush ( RGB ( 255, 0, 0 ) ) ;
	holdbr = SelectObject ( hdc, hbr ) ;
	MoveToEx ( hdc, 10, 10, NULL ) ;
	LineTo ( hdc, 200, 10 ) ;
	Rectangle ( hdc, 10, 20, 200, 100 ) ;
	RoundRect ( hdc, 10, 120, 200, 220, 20, 20 ) ;
	Ellipse ( hdc, 10, 240, 200, 340 ) ;
	Pie ( hdc, 250, 10, 350, 110, 350, 110, 350, 10 ) ;
	Polygon ( hdc, pt, 5 ) ;
	SelectObject ( hdc, holdbr ) ;
	DeleteObject ( hbr ) ;
	EndPaint ( hWnd, &ps ) ;
}

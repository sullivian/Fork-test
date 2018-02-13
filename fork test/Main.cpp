#include<Windows.h>


int CALLBACK WinMain ( HINSTANCE Instance, HINSTANCE PrevInstance, PSTR CmdLine, int CmdShow ) {
	HWND hwnd;

	hwnd = CreateWindow ( TEXT ( "static" ), TEXT ( "Hello Guys" ), WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, NULL, NULL, Instance, NULL );
	UpdateWindow ( hwnd );
	ShowWindow ( hwnd, CmdShow );
	MSG msg;
	while( GetMessage ( &msg, hwnd, NULL, NULL ) ) {
		TranslateMessage ( &msg );
		DispatchMessage ( &msg );
	}
	return msg.wParam ;
}
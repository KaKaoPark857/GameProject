#include <Windows.h>

void textcolor(int color_number){ //콘솔 텍스트 컬러 1~15
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
}
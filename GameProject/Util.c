#include <Windows.h>

void textcolor(int color_number){ //�ܼ� �ؽ�Ʈ �÷� 1~15
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
}
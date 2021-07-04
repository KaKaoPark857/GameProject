#include <stdio.h>
#include <windows.h>

int menu() {
	SetConsoleTitle(TEXT("미니게임천국"));
	system("mode con cols=200 lines=50 "); //col가로/line:세로
	int choiceMenu;
	while (1) {
		textcolor(14);
		printf("\t\t\t\t\t\t\t\t");
		printf("**********************************************\n");
		printf("\t\t\t\t\t\t\t\t");
		printf("==================미니게임 천국===============\n");
		printf("\t\t\t\t\t\t\t\t");
		printf("1. 가위바위보\t2. 3 6 9 게임\t3. 숫자 야구\n");
		printf("\t\t\t\t\t\t\t\t");
		printf("4. 업 엔 다운\t5. 주사위 게임\t6. 블랙 잭\n");
		printf("\t\t\t\t\t\t\t\t");
		printf("==============================================\n");
		printf("\t\t\t\t\t\t\t\t");
		printf("**********************************************\n");
		printf("\n\t\t\t\t\t\t\t\t번호 입력(종료 0) : ");
		scanf_s("%d", &choiceMenu);
		system("cls");
		switch (choiceMenu) {
		case 1: 
			Select1();
			textcolor(11);
			RSP_Game();
			system("cls");
			break;
		case 2: 
			Select2();
			textcolor(11);
			ThreeTime();
			system("cls");
			break;
		case 3: 
			Select3();
			textcolor(11); printf("게임 점검 중입니다.\n");
			//baseBall();
			system("pause");
			system("cls");
			break;
		case 4: 
			Select4();
			textcolor(11);
			UpnDown();
			system("cls");
			break;
		case 5: 
			Select5();
			textcolor(11);
			Dice();
			system("cls");
			break;
		case 6: 
			Select6();
			textcolor(11);
			textcolor(11); printf("게임 점검 중입니다.\n");
			system("pause");
			//BlackJack();
			break;
		default: goto END;
		}
	}
END:
	return 0;
}

//게임의 전체적인 흰배경 검정 글씨 게임 메뉴에서 게임 선택시 system("cls") 사용 해당 글씨만 빨간색 Sleep(500)에 해당 게임 접속
// 
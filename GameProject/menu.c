#include <stdio.h>

int menu() {
	int choiceMenu;
	while (1) {
		printf("1. 가위바위보\t2. 3 6 9 게임\t3. 숫자 야구\n4. 업엔 다운\t5. 주사위 굴리기\t\n\n번호 입력(종료 0) : ");
		scanf_s("%d", &choiceMenu);
		system("cls");
		switch (choiceMenu) {
		case 1: RSP_Game();
			system("cls");
			break;
		case 2: ThreeTime();
			system("cls");
			break;
		/*case 3: RSP_Game();
			system("cls");
			break;
		case 4: test4();
			break;
		case 5: test5();
			break;
		case 6: test6();
			break;*/
		default: goto END;
		}
	}
END:
	return 0;
}
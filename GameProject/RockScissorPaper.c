#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

void RSP_Game() {

	printf("\t\t\t\t\t\t\t\t");
	printf("**********************************\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("**********************************\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("**가위 바위 보 게임을 시작합니다**\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("**********************************\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("**********************************\n\n");

	printf("\t\t\t\t\t\t\t\t");
	printf("가위 : S / 바위 : R / 보 : P / 종료 : E\n");
	srand((unsigned)time(NULL));

	int game;
	int playerWin = 0, computerWin = 0;
	
	char insert, computerPick;
	
	while (1) {
		while (getchar() != '\n');

		insert = NULL, computerPick = NULL;
		game = 0;

		printf("\t\t\t\t\t\t\t\t");
		printf("가위~ ");  Sleep(125); printf("바위~ "); Sleep(125); printf("보~ ");
		scanf_s("%c", &insert, 2);
			
		if (insert == 'e') {
			printf("\t\t\t\t\t\t\t\t플레이어 이긴 회수 : %d\n\t\t\t\t\t\t\t\t컴퓨터 이긴 회수 : %d\n", playerWin, computerWin);
			playerWin, computerWin = 0;
			break;
		}
		else if (insert == 's' || insert == 'p' || insert == 'r') {
			game = rand() % 3+1;

			if (game == 1) computerPick = 's';
			else if (game == 2) computerPick = 'r';
			else computerPick = 'p';

			if (insert == computerPick) {
				printf("\t\t\t\t\t\t\t\t플레이어 : %c 컴퓨터 : %c\t비김\n\n", insert, computerPick);
			}
			else if (insert == 's' && computerPick == 'r'
				|| insert == 'r' && computerPick == 'p'
				|| insert == 'p' && computerPick == 's') {
				printf("\t\t\t\t\t\t\t\t플레이어 : %c 컴퓨터 : %c\t컴퓨터가 이김\n\n", insert, computerPick);
				computerWin++;
			}
			else if (insert == 'r' && computerPick == 's'
				|| insert == 'p' && computerPick == 'r'
				|| insert == 's' && computerPick == 'p') {
				printf("\t\t\t\t\t\t\t\t플레이어 : %c 컴퓨터 : %c\t플레이어가 이김\n\n", insert, computerPick);
				playerWin++;
			}
		}
		else{
			printf("\n\t\t\t\t\t\t\t\t");
			textcolor(12);
			printf("잘못된 입력입니다. 다시 입력해주세요\n");
			textcolor(11);
			continue;
		}
		
	}
	system("pause");
}
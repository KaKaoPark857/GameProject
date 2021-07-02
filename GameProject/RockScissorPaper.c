#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "RockScissorPaper.h"

void RSP_Game() {
	printf("가위 바위 보 게임\n");
	printf("가위 : S / 바위 : R / 보 : P\n");
	srand((unsigned)time(NULL));

	int game;
	int playerWin = 0, computerWin = 0;
	//Pick p;
	char insert, computerPick;

	while (1) {
		insert = NULL, computerPick = NULL;
		game = 0;
		
		scanf_s("%c", &insert, 2);
		if (insert == 'e') {
			printf("플레이어 이긴 회수 : %d\n컴퓨터 이긴 회수 : %d\n", playerWin, computerWin);
			playerWin, computerWin = 0;
			break;
		}

		game = rand() % 3;

		if (game == 0) computerPick = 's';
		else if (game == 1) computerPick = 'r';
		else computerPick = 'p';

		if (insert == computerPick) {
			printf("플레이어 : %c 컴퓨터 : %c\t비김\n\n", insert, computerPick);
		}
		else if (insert == 's' && computerPick == 'r'
			|| insert == 'r' && computerPick == 'p'
			|| insert == 'p' && computerPick == 's') {
			printf("플레이어 : %c 컴퓨터 : %c\t컴퓨터가 이김\n\n", insert, computerPick);
			computerWin++;
		}
		else if (insert == 'r' && computerPick == 's'
			|| insert == 'p' && computerPick == 'r'
			|| insert == 's' && computerPick == 'p') {
			printf("플레이어 : %c 컴퓨터 : %c\t플레이어가 이김\n\n", insert, computerPick);
			playerWin++;
		}
	}
	system("pause");
}
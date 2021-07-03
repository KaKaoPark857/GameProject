#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100
#define no {NULL}

void RSP_Game() {
	printf("\t\t\t\t\t\t\t\t���� ���� �� ����\n");
	printf("\t\t\t\t\t\t\t\t���� : S / ���� : R / �� : P / ���� : E\n");
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
			printf("\t\t\t\t\t\t\t\t�÷��̾� �̱� ȸ�� : %d\n\t\t\t\t\t\t\t\t��ǻ�� �̱� ȸ�� : %d\n", playerWin, computerWin);
			playerWin, computerWin = 0;
			break;
		}

		game = rand() % 3;

		if (game == 0) computerPick = 's';
		else if (game == 1) computerPick = 'r';
		else computerPick = 'p';

		if (insert == computerPick) {
			printf("\t\t\t\t\t\t\t\t�÷��̾� : %c ��ǻ�� : %c\t���\n\n", insert, computerPick);
		}
		else if (insert == 's' && computerPick == 'r'
			|| insert == 'r' && computerPick == 'p'
			|| insert == 'p' && computerPick == 's') {
			printf("\t\t\t\t\t\t\t\t�÷��̾� : %c ��ǻ�� : %c\t��ǻ�Ͱ� �̱�\n\n", insert, computerPick);
			computerWin++;
		}
		else if (insert == 'r' && computerPick == 's'
			|| insert == 'p' && computerPick == 'r'
			|| insert == 's' && computerPick == 'p') {
			printf("\t\t\t\t\t\t\t\t�÷��̾� : %c ��ǻ�� : %c\t�÷��̾ �̱�\n\n", insert, computerPick);
			playerWin++;
		}
	}
	system("pause");
}
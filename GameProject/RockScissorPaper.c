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
	printf("**���� ���� �� ������ �����մϴ�**\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("**********************************\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("**********************************\n\n");

	printf("\t\t\t\t\t\t\t\t");
	printf("���� : S / ���� : R / �� : P / ���� : E\n");
	srand((unsigned)time(NULL));

	int game;
	int playerWin = 0, computerWin = 0;
	
	char insert, computerPick;
	
	while (1) {
		while (getchar() != '\n');

		insert = NULL, computerPick = NULL;
		game = 0;

		printf("\t\t\t\t\t\t\t\t");
		printf("����~ ");  Sleep(125); printf("����~ "); Sleep(125); printf("��~ ");
		scanf_s("%c", &insert, 2);
			
		if (insert == 'e') {
			printf("\t\t\t\t\t\t\t\t�÷��̾� �̱� ȸ�� : %d\n\t\t\t\t\t\t\t\t��ǻ�� �̱� ȸ�� : %d\n", playerWin, computerWin);
			playerWin, computerWin = 0;
			break;
		}
		else if (insert == 's' || insert == 'p' || insert == 'r') {
			game = rand() % 3+1;

			if (game == 1) computerPick = 's';
			else if (game == 2) computerPick = 'r';
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
		else{
			printf("\n\t\t\t\t\t\t\t\t");
			textcolor(12);
			printf("�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���\n");
			textcolor(11);
			continue;
		}
		
	}
	system("pause");
}
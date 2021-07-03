#include <stdio.h>
#include <time.h>
#include <windows.h>
#define MAX 1000

typedef struct comNumList {
	int number[MAX]; //숫자 저장
	char findNum[MAX]; //박수를 언제 쳐야할지
	char insert[MAX]; // 입력값
}comNum;

void ThreeTime() {

	printf("\t\t\t\t\t\t\t\t");
	printf("**********************************\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("**********************************\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("*****3 6 9 게임을 시작합니다******\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("**********************************\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("**********************************\n\n");


	printf("\t\t\t\t\t\t\t\t");
	printf(" / : 박수, . 다음숫자\n");

	comNum n;
	printf("\t\t\t\t\t\t\t\t숫자 끝 지정 : ");
	int limit;
	scanf_s("%d", &limit);

	for (int i = 0; i < limit; i++) {
		n.number[i] = i + 1;
		if (n.number[i] / 10 == 3 || n.number[i] / 10 == 6|| n.number[i] / 10 == 9|| n.number[i] % 10 == 3 || n.number[i] % 10 == 6 || n.number[i] % 10 == 9) {
			n.findNum[i] = '/';
		}
		else n.findNum[i] = '.';
	}	
	printf("\n\t\t\t\t\t\t\t\t%d까지 가면 당신의 승리!!!\n", limit);
	printf("\n\t\t\t\t\t\t\t\t2초안에 입력해야 합니다~\n\n");
	int i = 0;
	char temp;
	int countdown = 3;

	while (1) {
		clock_t start = clock(); //현재 시작 시간 설정
		
		printf("\t\t\t\t\t\t\t\t");
		printf("3~ "); Sleep(125); printf("6~ "); Sleep(125); printf("9~ ");
		while (getchar() != '\n');
		scanf_s("%c", &(n.insert[i]), MAX);

		if (n.findNum[i] == n.insert[i]) {
			printf("\t\t\t\t\t\t\t\t%d\n", n.number[i]);
			i++;
			countdown = 3;
			if (n.number[i - 1] == limit) {
				printf("\t\t\t\t\t\t\t\t");
				printf("성공했습니다! Game Win!!!\n\n");
				break;
			}
		}
		else {
			textcolor(12);
			printf("\t\t\t\t\t\t\t\tGame Over!!!!\n\n");
			textcolor(11);
			break;
		}
		
		if ((clock() - start) / CLOCKS_PER_SEC > 2.0f) {
			textcolor(12);
			printf("\t\t\t\t\t\t\t\t");
			printf("시간 초과! Game Over!!!!\n\n");
			textcolor(11);
			break;
		}
		
	}
	system("pause");
}
//시간 제한
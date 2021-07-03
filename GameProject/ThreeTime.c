#include <stdio.h>
#include<time.h>
#include <windows.h>
#define MAX 1000

typedef struct comNumList {
	int number[MAX]; //숫자 저장
	char findNum[MAX]; //박수를 언제 쳐야할지
	char insert[MAX]; // 입력값
}comNum;

void ThreeTime() {
	printf("\t\t\t\t\t\t\t\t3 6 9 게임을 시작합니다\n\t\t\t\t\t\t\t\t / : 박수 , . 다음숫자\n");
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
	printf("\n\t\t\t\t\t\t\t\t%d까지 가면 당신의 승리!!!\n\n", limit);
	int i = 0;
	char temp;

	while (1) {
		printf("\t\t\t\t\t\t\t\t3~"); Sleep(125); printf(" 6~"); Sleep(125); printf(" 9~ ");
		getchar();
		//scanf_s("%c", &temp);
		//n.insert[i] = temp;
		scanf_s("%c", &(n.insert[i]), MAX);

		if (n.findNum[i] == n.insert[i]) {
			printf("\t\t\t\t\t\t\t\t%d\n", n.number[i]);
			i++;
		}
		else {
			printf("\t\t\t\t\t\t\t\t틀렸습니다~ \n\n");
			break;
		}
	}

	system("pause");

}
#include <stdio.h>
#include <time.h>
#include <windows.h>
#define MAX 1000

typedef struct comNumList {
	int number[MAX]; //���� ����
	char findNum[MAX]; //�ڼ��� ���� �ľ�����
	char insert[MAX]; // �Է°�
}comNum;

void ThreeTime() {

	printf("\t\t\t\t\t\t\t\t");
	printf("**********************************\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("**********************************\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("*****3 6 9 ������ �����մϴ�******\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("**********************************\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("**********************************\n\n");


	printf("\t\t\t\t\t\t\t\t");
	printf(" / : �ڼ�, . ��������\n");

	comNum n;
	printf("\t\t\t\t\t\t\t\t���� �� ���� : ");
	int limit;
	scanf_s("%d", &limit);

	for (int i = 0; i < limit; i++) {
		n.number[i] = i + 1;
		if (n.number[i] / 10 == 3 || n.number[i] / 10 == 6|| n.number[i] / 10 == 9|| n.number[i] % 10 == 3 || n.number[i] % 10 == 6 || n.number[i] % 10 == 9) {
			n.findNum[i] = '/';
		}
		else n.findNum[i] = '.';
	}	
	printf("\n\t\t\t\t\t\t\t\t%d���� ���� ����� �¸�!!!\n", limit);
	printf("\n\t\t\t\t\t\t\t\t2�ʾȿ� �Է��ؾ� �մϴ�~\n\n");
	int i = 0;
	char temp;
	int countdown = 3;

	while (1) {
		clock_t start = clock(); //���� ���� �ð� ����
		
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
				printf("�����߽��ϴ�! Game Win!!!\n\n");
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
			printf("�ð� �ʰ�! Game Over!!!!\n\n");
			textcolor(11);
			break;
		}
		
	}
	system("pause");
}
//�ð� ����
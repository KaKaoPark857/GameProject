#include <stdio.h>
#include<time.h>
#include <windows.h>
#define MAX 1000

typedef struct comNumList {
	int number[MAX]; //���� ����
	char findNum[MAX]; //�ڼ��� ���� �ľ�����
	char insert[MAX]; // �Է°�
}comNum;

void ThreeTime() {
	printf("3 6 9 ������ �����մϴ�\n / : �ڼ� , . ��������\n");
	comNum n;
	printf("���� �� ���� : ");
	int limit;
	scanf_s("%d", &limit);

	for (int i = 0; i < limit; i++) {
		n.number[i] = i + 1;
		if (n.number[i] / 10 == 3 || n.number[i] / 10 == 6|| n.number[i] / 10 == 9|| n.number[i] % 10 == 3 || n.number[i] % 10 == 6 || n.number[i] % 10 == 9) {
			n.findNum[i] = '/';
		}
		else n.findNum[i] = '.';
	}	
	printf("\n%d���� ���� ����� �¸�!!!\n\n", limit);
	int i = 0;
	char temp;

	while (1) {
		printf("3~"); Sleep(125); printf("6~"); Sleep(125); printf("9~\n");
		getchar();
		//scanf_s("%c", &temp);
		//n.insert[i] = temp;
		scanf_s("%c", &(n.insert[i]), MAX);

		if (n.findNum[i] == n.insert[i]) {
			printf("%d\n", n.number[i]);
			i++;
		}
		else {
			printf("Ʋ�Ƚ��ϴ�~ \n\n");
			break;
		}
	}

	printf("��������");

}
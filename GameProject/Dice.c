#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

typedef struct Game {
	int progress; //�ֻ����� �� �� Ƚ��
	int dice; //�ֻ��� ���� ��
	char player[20]; //�÷��̾�
}GameSet;

void SoloPlay(int dist) { //�ַ� �÷��� ��ǻ�Ϳ��� ���
	GameSet p1, com;
	printf("\t\t\t\t\t\t\t\t");
	printf("�÷��̾� �̸��� �Է����ּ��� : ");
	scanf_s("%s", p1.player, 20);
	strcpy(com.player, "Computer"); //��ǻ�� �̸� ����
	
	system("cls");
	printf("\n\t\t\t\t\t\t\t\t");
	printf("=========================================\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("============������ �����մϴ�============\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("=========================================\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("%d���� ������ �÷��̾ �̱�ϴ�!!\n", dist);
	printf("\t\t\t\t\t\t\t\t");
	printf("������ �̸��� ������ ������� �����մϴ�!\n\n");
	int count = 1;

	p1.progress = 0, com.progress = 0; //���൵ �ʱ�ȭ


	while (1) {
		printf("\t\t\t\t\t\t\t\t");
		printf("=========================================\n");
		printf("\t\t\t\t\t\t\t\t");
		printf("%d��° �ֻ����� �����ϴ�\n", count);
		
		p1.dice = rand() % 6 + 1; //�÷��̾��� �ֻ��� ���� 1~6
		p1.progress += p1.dice; //�ֻ����� ���� ����ŭ ���൵ ����
		printf("\t\t\t\t\t\t\t\t");
		printf("���� �ֻ��� �� : %d\n", p1.dice);
		printf("\t\t\t\t\t\t\t\t");
		printf("%s ���� ���൵ : %d\n\n", p1.player, p1.progress);
		Sleep(500);
		
		com.dice = rand() % 6 + 1;
		com.progress += com.dice;
		printf("\t\t\t\t\t\t\t\t");
		printf("���� �ֻ��� �� : %d\n", com.dice);
		printf("\t\t\t\t\t\t\t\t");
		printf("%s ���� ���൵ : %d\n\n", com.player, com.progress);
		Sleep(500);

		if (p1.progress >= dist){
			printf("\t\t\t\t\t\t\t\t");
			printf("%d�� ���� ������ %s �¸�!!!\n", dist, p1.player);
			system("pause");
			break;
		}
		else if(com.progress >=dist) {
			printf("\t\t\t\t\t\t\t\t");
			printf("%d�� ���� ������ %s �¸�!!!\n", dist, com.player); 
			system("pause");
			break;
		}
		count++;
		system("pause");
		system("cls");
	}
}
void TwoPlay(int dist) {
	GameSet p1, p2;

	printf("\t\t\t\t\t\t\t\t");
	printf("ù ��° �÷��̾� �̸��� �Է����ּ��� : ");
	scanf_s("%s", p1.player, 20);
	
	printf("\t\t\t\t\t\t\t\t");
	printf("�� ��° �÷��̾� �̸��� �Է����ּ��� : ");
	scanf_s("%s", p2.player, 20);

	system("cls");
	printf("\n\t\t\t\t\t\t\t\t");
	printf("=========================================\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("============������ �����մϴ�============\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("=========================================\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("%d���� ������ �÷��̾ �̱�ϴ�!!\n", dist);
	printf("\t\t\t\t\t\t\t\t");
	printf("������ �̸��� ������ ������� �����մϴ�!\n\n");
	int count = 1;

	p1.progress = 0, p2.progress = 0; //���൵ �ʱ�ȭ


	while (1) {
		printf("\t\t\t\t\t\t\t\t");
		printf("=========================================\n");
		printf("\t\t\t\t\t\t\t\t");
		printf("%d��° �ֻ����� �����ϴ�\n", count);

		p1.dice = rand() % 6 + 1; //�÷��̾� 1�� �ֻ��� ���� 1~6
		p1.progress += p1.dice;
		printf("\t\t\t\t\t\t\t\t");
		printf("���� �ֻ��� �� : %d\n", p1.dice);
		printf("\t\t\t\t\t\t\t\t");
		printf("%s ���� ���൵ : %d\n\n", p1.player, p1.progress);
		Sleep(500);

		p2.dice = rand() % 6 + 1;
		p2.progress += p2.dice;
		printf("\t\t\t\t\t\t\t\t");
		printf("���� �ֻ��� �� : %d\n", p2.dice);
		printf("\t\t\t\t\t\t\t\t");
		printf("%s ���� ���൵ : %d\n\n", p2.player, p2.progress);
		Sleep(500);

		if (p1.progress >= dist) {
			printf("\t\t\t\t\t\t\t\t");
			printf("%d�� ���� ������ %s �¸�!!!\n", dist, p1.player);
			system("pause");
			break;
		}
		else if (p2.progress >= dist) {
			printf("\t\t\t\t\t\t\t\t");
			printf("%d�� ���� ������ %s �¸�!!!\n", dist, p2.player);
			system("pause");
			break;
		}
		count++;
		system("pause");
		system("cls");
	}
}
void ThreePlay(int dist) {
	GameSet p1, p2, p3;

	printf("\t\t\t\t\t\t\t\t");
	printf("ù ��° �÷��̾� �̸��� �Է����ּ��� : ");
	scanf_s("%s", p1.player, 20);

	printf("\t\t\t\t\t\t\t\t");
	printf("�� ��° �÷��̾� �̸��� �Է����ּ��� : ");
	scanf_s("%s", p2.player, 20);

	printf("\t\t\t\t\t\t\t\t");
	printf("�� ��° �÷��̾� �̸��� �Է����ּ��� : ");
	scanf_s("%s", p3.player, 20);

	system("cls");
	printf("\n\t\t\t\t\t\t\t\t");
	printf("=========================================\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("============������ �����մϴ�============\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("=========================================\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("%d���� ������ �÷��̾ �̱�ϴ�!!\n", dist);
	printf("\t\t\t\t\t\t\t\t");
	printf("������ �̸��� ������ ������� �����մϴ�!\n\n");
	int count = 1;

	p1.progress = 0, p2.progress = 0, p3.progress = 0; //���൵ �ʱ�ȭ

	while (1) {
		printf("\t\t\t\t\t\t\t\t");
		printf("=========================================\n");
		printf("\t\t\t\t\t\t\t\t");
		printf("%d��° �ֻ����� �����ϴ�\n", count);

		p1.dice = rand() % 6 + 1; //�÷��̾� 1�� �ֻ��� ���� 1~6
		p1.progress += p1.dice;
		printf("\t\t\t\t\t\t\t\t");
		printf("���� �ֻ��� �� : %d\n", p1.dice);
		printf("\t\t\t\t\t\t\t\t");
		printf("%s ���� ���൵ : %d\n\n", p1.player, p1.progress);
		Sleep(500);

		p2.dice = rand() % 6 + 1;
		p2.progress += p2.dice;
		printf("\t\t\t\t\t\t\t\t");
		printf("���� �ֻ��� �� : %d\n", p2.dice);
		printf("\t\t\t\t\t\t\t\t");
		printf("%s ���� ���൵ : %d\n\n", p2.player, p2.progress);
		Sleep(500);

		p3.dice = rand() % 6 + 1;
		p3.progress += p3.dice;
		printf("\t\t\t\t\t\t\t\t");
		printf("���� �ֻ��� �� : %d\n", p3.dice);
		printf("\t\t\t\t\t\t\t\t");
		printf("%s ���� ���൵ : %d\n\n", p3.player, p3.progress);
		Sleep(500);

		if (p1.progress >= dist) {
			printf("\t\t\t\t\t\t\t\t");
			printf("%d�� ���� ������ %s �¸�!!!\n", dist, p1.player);
			system("pause");
			break;
		}
		else if (p2.progress >= dist) {
			printf("\t\t\t\t\t\t\t\t");
			printf("%d�� ���� ������ %s �¸�!!!\n", dist, p2.player);
			system("pause");
			break;
		}
		else if (p3.progress >= dist) {
			printf("\t\t\t\t\t\t\t\t");
			printf("%d�� ���� ������ %s �¸�!!!\n", dist, p3.player);
			system("pause");
			break;
		}
		count++;
		system("pause");
		system("cls");
	}
}
void FourPlay(int dist) {
	GameSet p1, p2, p3, p4;

	printf("\t\t\t\t\t\t\t\t");
	printf("ù ��° �÷��̾� �̸��� �Է����ּ��� : ");
	scanf_s("%s", p1.player, 20);

	printf("\t\t\t\t\t\t\t\t");
	printf("�� ��° �÷��̾� �̸��� �Է����ּ��� : ");
	scanf_s("%s", p2.player, 20);

	printf("\t\t\t\t\t\t\t\t");
	printf("�� ��° �÷��̾� �̸��� �Է����ּ��� : ");
	scanf_s("%s", p3.player, 20);

	printf("\t\t\t\t\t\t\t\t");
	printf("�� ��° �÷��̾� �̸��� �Է����ּ��� : ");
	scanf_s("%s", p4.player, 20);

	system("cls");
	printf("\n\t\t\t\t\t\t\t\t");
	printf("=========================================\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("============������ �����մϴ�============\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("=========================================\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("%d���� ������ �÷��̾ �̱�ϴ�!!\n", dist);
	printf("\t\t\t\t\t\t\t\t");
	printf("������ �̸��� ������ ������� �����մϴ�!\n\n");
	int count = 1;

	p1.progress = 0, p2.progress = 0, p3.progress = 0, p4.progress = 0; //���൵ �ʱ�ȭ

	while (1) {
		printf("\t\t\t\t\t\t\t\t");
		printf("=========================================\n");
		printf("\t\t\t\t\t\t\t\t");
		printf("%d��° �ֻ����� �����ϴ�\n", count);

		p1.dice = rand() % 6 + 1; //�÷��̾� 1�� �ֻ��� ���� 1~6
		p1.progress += p1.dice;
		printf("\t\t\t\t\t\t\t\t");
		printf("���� �ֻ��� �� : %d\n", p1.dice);
		printf("\t\t\t\t\t\t\t\t");
		printf("%s ���� ���൵ : %d\n\n", p1.player, p1.progress);
		Sleep(500);

		p2.dice = rand() % 6 + 1;
		p2.progress += p2.dice;
		printf("\t\t\t\t\t\t\t\t");
		printf("���� �ֻ��� �� : %d\n", p2.dice);
		printf("\t\t\t\t\t\t\t\t");
		printf("%s ���� ���൵ : %d\n\n", p2.player, p2.progress);
		Sleep(500);

		p3.dice = rand() % 6 + 1;
		p3.progress += p3.dice;
		printf("\t\t\t\t\t\t\t\t");
		printf("���� �ֻ��� �� : %d\n", p3.dice);
		printf("\t\t\t\t\t\t\t\t");
		printf("%s ���� ���൵ : %d\n\n", p3.player, p3.progress);
		Sleep(500);

		p4.dice = rand() % 6 + 1;
		p4.progress += p4.dice;
		printf("\t\t\t\t\t\t\t\t");
		printf("���� �ֻ��� �� : %d\n", p4.dice);
		printf("\t\t\t\t\t\t\t\t");
		printf("%s ���� ���൵ : %d\n\n", p4.player, p4.progress);
		Sleep(500);

		if (p1.progress >= dist) {
			printf("\t\t\t\t\t\t\t\t");
			printf("%d�� ���� ������ %s �¸�!!!\n", dist, p1.player);
			system("pause");
			break;
		}
		else if (p2.progress >= dist) {
			printf("\t\t\t\t\t\t\t\t");
			printf("%d�� ���� ������ %s �¸�!!!\n", dist, p2.player);
			system("pause");
			break;
		}
		else if (p3.progress >= dist) {
			printf("\t\t\t\t\t\t\t\t");
			printf("%d�� ���� ������ %s �¸�!!!\n", dist, p3.player);
			system("pause");
			break;
		}
		else if (p4.progress >= dist) {
			printf("\t\t\t\t\t\t\t\t");
			printf("%d�� ���� ������ %s �¸�!!!\n", dist, p4.player);
			system("pause");
			break;
		}
		count++;
		system("pause");
		system("cls");
	}
}

void Dice() {
	srand((unsigned int)time(NULL));
	int playerNumber, distance;
	while (1) {
		printf("\t\t\t\t\t\t\t\t");
		printf("**********************************\n");
		printf("\t\t\t\t\t\t\t\t");
		printf("**********************************\n");
		printf("\t\t\t\t\t\t\t\t");
		printf("*****�ֻ��� ������ �����մϴ�*****\n");
		printf("\t\t\t\t\t\t\t\t");
		printf("**********************************\n");
		printf("\t\t\t\t\t\t\t\t");
		printf("**********************************\n");

		printf("\n\t\t\t\t\t\t\t\t");
		printf("�ִ� 4����� �÷��̰� �����մϴ�!!!\n");
		printf("\t\t\t\t\t\t\t\t");
		printf("�÷��� �� �ο��� �Է����ּ���(����� 0) : ");
		scanf_s("%d", &playerNumber);
		if (playerNumber == 0) { //�����ư
			/*printf("\t\t\t\t\t\t\t\t");
			printf("���� �մϴ�~!\n");*/
			break;
		}
		printf("\t\t\t\t\t\t\t\t");
		printf("���� ������ ���ڸ� �Է����ּ��� : ");
		scanf_s("%d", &distance);

		switch (playerNumber) {
		case 1: //1�� �÷���
			printf("\t\t\t\t\t\t\t\t");
			printf("��ǻ�Ϳ� 1:1 ����Դϴ�\n");
			SoloPlay(distance);
			system("cls");
			break;
		case 2:
			printf("\t\t\t\t\t\t\t\t");
			printf("2�� �÷���\n");
			TwoPlay(distance);
			system("cls");
			break;
		case 3:
			printf("\t\t\t\t\t\t\t\t");
			printf("3�� �÷���\n");
			ThreePlay(distance);
			system("cls");
			break;
		case 4:
			printf("\t\t\t\t\t\t\t\t");
			printf("4�� �÷���\n");
			FourPlay(distance);
			system("cls");
			break;
		
		default: //�ִ� �÷��̾���� 4�� �Ѿ��
			system("cls");
			printf("\t\t\t\t\t\t\t\t");
			printf("*************Warning*************\n");
			printf("\t\t\t\t\t\t\t\t");
			printf("�ִ� 4����� �Է��� �����մϴ�.\n\n");
			continue;
		}
	}
	
}
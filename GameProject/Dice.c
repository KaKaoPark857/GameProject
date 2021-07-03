#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

typedef struct Game {
	int progress; //주사위로 총 간 횟수
	int dice; //주사위 눈금 수
	char player[20]; //플레이어
}GameSet;

void SoloPlay(int dist) { //솔로 플레이 컴퓨터와의 대결
	GameSet p1, com;
	printf("\t\t\t\t\t\t\t\t");
	printf("플레이어 이름을 입력해주세요 : ");
	scanf_s("%s", p1.player, 20);
	strcpy(com.player, "Computer"); //컴퓨터 이름 설정
	
	system("cls");
	printf("\n\t\t\t\t\t\t\t\t");
	printf("=========================================\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("============게임을 시작합니다============\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("=========================================\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("%d까지 도달한 플레이어가 이깁니다!!\n", dist);
	printf("\t\t\t\t\t\t\t\t");
	printf("순서는 이름을 기입한 순서대로 진행합니다!\n\n");
	int count = 1;

	p1.progress = 0, com.progress = 0; //진행도 초기화


	while (1) {
		printf("\t\t\t\t\t\t\t\t");
		printf("=========================================\n");
		printf("\t\t\t\t\t\t\t\t");
		printf("%d번째 주사위를 굴립니다\n", count);
		
		p1.dice = rand() % 6 + 1; //플레이어의 주사위 랜덤 1~6
		p1.progress += p1.dice; //주사위가 나온 수만큼 진행도 저장
		printf("\t\t\t\t\t\t\t\t");
		printf("굴린 주사위 수 : %d\n", p1.dice);
		printf("\t\t\t\t\t\t\t\t");
		printf("%s 선수 진행도 : %d\n\n", p1.player, p1.progress);
		Sleep(500);
		
		com.dice = rand() % 6 + 1;
		com.progress += com.dice;
		printf("\t\t\t\t\t\t\t\t");
		printf("굴린 주사위 수 : %d\n", com.dice);
		printf("\t\t\t\t\t\t\t\t");
		printf("%s 선수 진행도 : %d\n\n", com.player, com.progress);
		Sleep(500);

		if (p1.progress >= dist){
			printf("\t\t\t\t\t\t\t\t");
			printf("%d에 먼저 도착한 %s 승리!!!\n", dist, p1.player);
			system("pause");
			break;
		}
		else if(com.progress >=dist) {
			printf("\t\t\t\t\t\t\t\t");
			printf("%d에 먼저 도착한 %s 승리!!!\n", dist, com.player); 
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
	printf("첫 번째 플레이어 이름을 입력해주세요 : ");
	scanf_s("%s", p1.player, 20);
	
	printf("\t\t\t\t\t\t\t\t");
	printf("두 번째 플레이어 이름을 입력해주세요 : ");
	scanf_s("%s", p2.player, 20);

	system("cls");
	printf("\n\t\t\t\t\t\t\t\t");
	printf("=========================================\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("============게임을 시작합니다============\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("=========================================\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("%d까지 도달한 플레이어가 이깁니다!!\n", dist);
	printf("\t\t\t\t\t\t\t\t");
	printf("순서는 이름을 기입한 순서대로 진행합니다!\n\n");
	int count = 1;

	p1.progress = 0, p2.progress = 0; //진행도 초기화


	while (1) {
		printf("\t\t\t\t\t\t\t\t");
		printf("=========================================\n");
		printf("\t\t\t\t\t\t\t\t");
		printf("%d번째 주사위를 굴립니다\n", count);

		p1.dice = rand() % 6 + 1; //플레이어 1의 주사위 랜덤 1~6
		p1.progress += p1.dice;
		printf("\t\t\t\t\t\t\t\t");
		printf("굴린 주사위 수 : %d\n", p1.dice);
		printf("\t\t\t\t\t\t\t\t");
		printf("%s 선수 진행도 : %d\n\n", p1.player, p1.progress);
		Sleep(500);

		p2.dice = rand() % 6 + 1;
		p2.progress += p2.dice;
		printf("\t\t\t\t\t\t\t\t");
		printf("굴린 주사위 수 : %d\n", p2.dice);
		printf("\t\t\t\t\t\t\t\t");
		printf("%s 선수 진행도 : %d\n\n", p2.player, p2.progress);
		Sleep(500);

		if (p1.progress >= dist) {
			printf("\t\t\t\t\t\t\t\t");
			printf("%d에 먼저 도착한 %s 승리!!!\n", dist, p1.player);
			system("pause");
			break;
		}
		else if (p2.progress >= dist) {
			printf("\t\t\t\t\t\t\t\t");
			printf("%d에 먼저 도착한 %s 승리!!!\n", dist, p2.player);
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
	printf("첫 번째 플레이어 이름을 입력해주세요 : ");
	scanf_s("%s", p1.player, 20);

	printf("\t\t\t\t\t\t\t\t");
	printf("두 번째 플레이어 이름을 입력해주세요 : ");
	scanf_s("%s", p2.player, 20);

	printf("\t\t\t\t\t\t\t\t");
	printf("세 번째 플레이어 이름을 입력해주세요 : ");
	scanf_s("%s", p3.player, 20);

	system("cls");
	printf("\n\t\t\t\t\t\t\t\t");
	printf("=========================================\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("============게임을 시작합니다============\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("=========================================\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("%d까지 도달한 플레이어가 이깁니다!!\n", dist);
	printf("\t\t\t\t\t\t\t\t");
	printf("순서는 이름을 기입한 순서대로 진행합니다!\n\n");
	int count = 1;

	p1.progress = 0, p2.progress = 0, p3.progress = 0; //진행도 초기화

	while (1) {
		printf("\t\t\t\t\t\t\t\t");
		printf("=========================================\n");
		printf("\t\t\t\t\t\t\t\t");
		printf("%d번째 주사위를 굴립니다\n", count);

		p1.dice = rand() % 6 + 1; //플레이어 1의 주사위 랜덤 1~6
		p1.progress += p1.dice;
		printf("\t\t\t\t\t\t\t\t");
		printf("굴린 주사위 수 : %d\n", p1.dice);
		printf("\t\t\t\t\t\t\t\t");
		printf("%s 선수 진행도 : %d\n\n", p1.player, p1.progress);
		Sleep(500);

		p2.dice = rand() % 6 + 1;
		p2.progress += p2.dice;
		printf("\t\t\t\t\t\t\t\t");
		printf("굴린 주사위 수 : %d\n", p2.dice);
		printf("\t\t\t\t\t\t\t\t");
		printf("%s 선수 진행도 : %d\n\n", p2.player, p2.progress);
		Sleep(500);

		p3.dice = rand() % 6 + 1;
		p3.progress += p3.dice;
		printf("\t\t\t\t\t\t\t\t");
		printf("굴린 주사위 수 : %d\n", p3.dice);
		printf("\t\t\t\t\t\t\t\t");
		printf("%s 선수 진행도 : %d\n\n", p3.player, p3.progress);
		Sleep(500);

		if (p1.progress >= dist) {
			printf("\t\t\t\t\t\t\t\t");
			printf("%d에 먼저 도착한 %s 승리!!!\n", dist, p1.player);
			system("pause");
			break;
		}
		else if (p2.progress >= dist) {
			printf("\t\t\t\t\t\t\t\t");
			printf("%d에 먼저 도착한 %s 승리!!!\n", dist, p2.player);
			system("pause");
			break;
		}
		else if (p3.progress >= dist) {
			printf("\t\t\t\t\t\t\t\t");
			printf("%d에 먼저 도착한 %s 승리!!!\n", dist, p3.player);
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
	printf("첫 번째 플레이어 이름을 입력해주세요 : ");
	scanf_s("%s", p1.player, 20);

	printf("\t\t\t\t\t\t\t\t");
	printf("두 번째 플레이어 이름을 입력해주세요 : ");
	scanf_s("%s", p2.player, 20);

	printf("\t\t\t\t\t\t\t\t");
	printf("세 번째 플레이어 이름을 입력해주세요 : ");
	scanf_s("%s", p3.player, 20);

	printf("\t\t\t\t\t\t\t\t");
	printf("네 번째 플레이어 이름을 입력해주세요 : ");
	scanf_s("%s", p4.player, 20);

	system("cls");
	printf("\n\t\t\t\t\t\t\t\t");
	printf("=========================================\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("============게임을 시작합니다============\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("=========================================\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("%d까지 도달한 플레이어가 이깁니다!!\n", dist);
	printf("\t\t\t\t\t\t\t\t");
	printf("순서는 이름을 기입한 순서대로 진행합니다!\n\n");
	int count = 1;

	p1.progress = 0, p2.progress = 0, p3.progress = 0, p4.progress = 0; //진행도 초기화

	while (1) {
		printf("\t\t\t\t\t\t\t\t");
		printf("=========================================\n");
		printf("\t\t\t\t\t\t\t\t");
		printf("%d번째 주사위를 굴립니다\n", count);

		p1.dice = rand() % 6 + 1; //플레이어 1의 주사위 랜덤 1~6
		p1.progress += p1.dice;
		printf("\t\t\t\t\t\t\t\t");
		printf("굴린 주사위 수 : %d\n", p1.dice);
		printf("\t\t\t\t\t\t\t\t");
		printf("%s 선수 진행도 : %d\n\n", p1.player, p1.progress);
		Sleep(500);

		p2.dice = rand() % 6 + 1;
		p2.progress += p2.dice;
		printf("\t\t\t\t\t\t\t\t");
		printf("굴린 주사위 수 : %d\n", p2.dice);
		printf("\t\t\t\t\t\t\t\t");
		printf("%s 선수 진행도 : %d\n\n", p2.player, p2.progress);
		Sleep(500);

		p3.dice = rand() % 6 + 1;
		p3.progress += p3.dice;
		printf("\t\t\t\t\t\t\t\t");
		printf("굴린 주사위 수 : %d\n", p3.dice);
		printf("\t\t\t\t\t\t\t\t");
		printf("%s 선수 진행도 : %d\n\n", p3.player, p3.progress);
		Sleep(500);

		p4.dice = rand() % 6 + 1;
		p4.progress += p4.dice;
		printf("\t\t\t\t\t\t\t\t");
		printf("굴린 주사위 수 : %d\n", p4.dice);
		printf("\t\t\t\t\t\t\t\t");
		printf("%s 선수 진행도 : %d\n\n", p4.player, p4.progress);
		Sleep(500);

		if (p1.progress >= dist) {
			printf("\t\t\t\t\t\t\t\t");
			printf("%d에 먼저 도착한 %s 승리!!!\n", dist, p1.player);
			system("pause");
			break;
		}
		else if (p2.progress >= dist) {
			printf("\t\t\t\t\t\t\t\t");
			printf("%d에 먼저 도착한 %s 승리!!!\n", dist, p2.player);
			system("pause");
			break;
		}
		else if (p3.progress >= dist) {
			printf("\t\t\t\t\t\t\t\t");
			printf("%d에 먼저 도착한 %s 승리!!!\n", dist, p3.player);
			system("pause");
			break;
		}
		else if (p4.progress >= dist) {
			printf("\t\t\t\t\t\t\t\t");
			printf("%d에 먼저 도착한 %s 승리!!!\n", dist, p4.player);
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
		printf("*****주사위 게임을 시작합니다*****\n");
		printf("\t\t\t\t\t\t\t\t");
		printf("**********************************\n");
		printf("\t\t\t\t\t\t\t\t");
		printf("**********************************\n");

		printf("\n\t\t\t\t\t\t\t\t");
		printf("최대 4명까지 플레이가 가능합니다!!!\n");
		printf("\t\t\t\t\t\t\t\t");
		printf("플레이 할 인원을 입력해주세요(종료는 0) : ");
		scanf_s("%d", &playerNumber);
		if (playerNumber == 0) { //종료버튼
			/*printf("\t\t\t\t\t\t\t\t");
			printf("종료 합니다~!\n");*/
			break;
		}
		printf("\t\t\t\t\t\t\t\t");
		printf("최종 도달할 숫자를 입력해주세요 : ");
		scanf_s("%d", &distance);

		switch (playerNumber) {
		case 1: //1인 플레이
			printf("\t\t\t\t\t\t\t\t");
			printf("컴퓨터와 1:1 대결입니다\n");
			SoloPlay(distance);
			system("cls");
			break;
		case 2:
			printf("\t\t\t\t\t\t\t\t");
			printf("2인 플레이\n");
			TwoPlay(distance);
			system("cls");
			break;
		case 3:
			printf("\t\t\t\t\t\t\t\t");
			printf("3인 플레이\n");
			ThreePlay(distance);
			system("cls");
			break;
		case 4:
			printf("\t\t\t\t\t\t\t\t");
			printf("4인 플레이\n");
			FourPlay(distance);
			system("cls");
			break;
		
		default: //최대 플레이어수인 4를 넘어갈때
			system("cls");
			printf("\t\t\t\t\t\t\t\t");
			printf("*************Warning*************\n");
			printf("\t\t\t\t\t\t\t\t");
			printf("최대 4명까지 입력이 가능합니다.\n\n");
			continue;
		}
	}
	
}
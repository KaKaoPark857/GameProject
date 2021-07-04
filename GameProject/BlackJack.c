//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define SPADE "♠"
//#define CLUB "♣"
//#define DIA "◆"
//#define HEART "♥"
//
//
//typedef struct CardSet {
//	int Number; //카드 숫자 1~13
//	char Shape; //카드 기호 스페이드, 하트, 클로버, 다이아
//}Card;
//
//Card all_Card[52]; //총 52장의 카드
//
//typedef struct PlayerInfo {
//	char name[20]; //유저 이름
//	int score; //카드 합 수
//	//int money; // 배팅시 사용
//
//}Player;
//
//void cardShuffle() { //카드 섞기
//	srand((unsigned int)time(NULL));
//	Card temp;
//	for (int i = 0; i < 52; i++) {
//		int idx = rand() % 52;
//		 temp = all_Card[idx];
//		 all_Card[idx] = all_Card[i];
//		 all_Card[i] = temp;
//	}
//}
//int next = 0;
//Card give(int next) { return all_Card[next]; } //카드 한 장씩
//
//void filldeck(){
//	
//}
//
////if (j % 4 == 0) all_Card[i].Shape = SPADE;
////else if (j % 4 == 1) all_Card[i].Shape = CLUB;
////else if (j % 4 == 2) all_Card[i].Shape = DIA;
////else all_Card[i].Shape = HEART;
//
//void reset() { //초기화
//	filldeck();
//	cardShuffle();
//	next = 0;
//}
//void gamePlay() {
//	reset();
//}
//
////랜덤을 2개 숫자, 기호 미리 지정 숫자 한개당 4개의 기호
//
//void BlackJack() {
//	/*Card com, p1, p2, p3;
//	printf("블랙 잭\n");
//	int playerCount;
//	printf("플레이어 수를 입력해주세요(1~3) : ");
//	scanf_s("%d", &playerCount);
//	if (playerCount < 0 || playerCount>4) {
//		printf("최대 플레이어 수는 3명입니다!!\n");
//	}*/
//
//	char choice;
//	printf("블랙 잭 게임에 오신걸 환영합니다(y/n).");
//	
//	while (1) {
//		while (getchar() != '\n');
//		scanf_s("%c", &choice, 4);
//		if (choice == 'y' || choice == 'Y') {
//			reset();
//			gamePlay();
//		}
//		else if (choice == 'n' || choice == 'N') {
//			printf("게임을 종료합니다.\n");
//			break;
//		}
//		else {
//			printf("잘못된 입력입니다. 다시 입력해주세요!!\n");
//			continue;
//		}
//	}
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define SPADE "��"
//#define CLUB "��"
//#define DIA "��"
//#define HEART "��"
//
//
//typedef struct CardSet {
//	int Number; //ī�� ���� 1~13
//	char Shape; //ī�� ��ȣ �����̵�, ��Ʈ, Ŭ�ι�, ���̾�
//}Card;
//
//Card all_Card[52]; //�� 52���� ī��
//
//typedef struct PlayerInfo {
//	char name[20]; //���� �̸�
//	int score; //ī�� �� ��
//	//int money; // ���ý� ���
//
//}Player;
//
//void cardShuffle() { //ī�� ����
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
//Card give(int next) { return all_Card[next]; } //ī�� �� �徿
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
//void reset() { //�ʱ�ȭ
//	filldeck();
//	cardShuffle();
//	next = 0;
//}
//void gamePlay() {
//	reset();
//}
//
////������ 2�� ����, ��ȣ �̸� ���� ���� �Ѱ��� 4���� ��ȣ
//
//void BlackJack() {
//	/*Card com, p1, p2, p3;
//	printf("�� ��\n");
//	int playerCount;
//	printf("�÷��̾� ���� �Է����ּ���(1~3) : ");
//	scanf_s("%d", &playerCount);
//	if (playerCount < 0 || playerCount>4) {
//		printf("�ִ� �÷��̾� ���� 3���Դϴ�!!\n");
//	}*/
//
//	char choice;
//	printf("�� �� ���ӿ� ���Ű� ȯ���մϴ�(y/n).");
//	
//	while (1) {
//		while (getchar() != '\n');
//		scanf_s("%c", &choice, 4);
//		if (choice == 'y' || choice == 'Y') {
//			reset();
//			gamePlay();
//		}
//		else if (choice == 'n' || choice == 'N') {
//			printf("������ �����մϴ�.\n");
//			break;
//		}
//		else {
//			printf("�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���!!\n");
//			continue;
//		}
//	}
//}

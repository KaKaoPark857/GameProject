#include <stdio.h>
#include <windows.h>

int menu() {
	SetConsoleTitle(TEXT("�̴ϰ���õ��"));
	system("mode con cols=200 lines=50 "); //col����/line:����
	int choiceMenu;
	while (1) {
		textcolor(14);
		printf("\t\t\t\t\t\t\t\t");
		printf("**********************************************\n");
		printf("\t\t\t\t\t\t\t\t");
		printf("==================�̴ϰ��� õ��===============\n");
		printf("\t\t\t\t\t\t\t\t");
		printf("1. ����������\t2. 3 6 9 ����\t3. ���� �߱�\n");
		printf("\t\t\t\t\t\t\t\t");
		printf("4. �� �� �ٿ�\t5. �ֻ��� ����\t6. �� ��\n");
		printf("\t\t\t\t\t\t\t\t");
		printf("==============================================\n");
		printf("\t\t\t\t\t\t\t\t");
		printf("**********************************************\n");
		printf("\n\t\t\t\t\t\t\t\t��ȣ �Է�(���� 0) : ");
		scanf_s("%d", &choiceMenu);
		system("cls");
		switch (choiceMenu) {
		case 1: 
			Select1();
			textcolor(11);
			RSP_Game();
			system("cls");
			break;
		case 2: 
			Select2();
			textcolor(11);
			ThreeTime();
			system("cls");
			break;
		case 3: 
			Select3();
			textcolor(11); printf("���� ���� ���Դϴ�.\n");
			//baseBall();
			system("pause");
			system("cls");
			break;
		case 4: 
			Select4();
			textcolor(11);
			UpnDown();
			system("cls");
			break;
		case 5: 
			Select5();
			textcolor(11);
			Dice();
			system("cls");
			break;
		case 6: 
			Select6();
			textcolor(11);
			textcolor(11); printf("���� ���� ���Դϴ�.\n");
			system("pause");
			//BlackJack();
			break;
		default: goto END;
		}
	}
END:
	return 0;
}

//������ ��ü���� ���� ���� �۾� ���� �޴����� ���� ���ý� system("cls") ��� �ش� �۾��� ������ Sleep(500)�� �ش� ���� ����
// 
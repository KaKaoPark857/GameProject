#include <stdio.h>
#include <windows.h>

int menu() {
	SetConsoleTitle(TEXT("�̴ϰ���õ��"));
	system("mode con cols=200 lines=50 "); //col����/line:����
	int choiceMenu;
	while (1) {
		textcolor(14);
		printf("\t\t\t\t\t\t\t\t**********************************************\n");
		printf("\t\t\t\t\t\t\t\t==================�̴ϰ��� õ��===============\n");
		printf("\t\t\t\t\t\t\t\t1. ����������\t2. 3 6 9 ����\t3. ���� �߱�\n");
		printf("\t\t\t\t\t\t\t\t4. ���� �ٿ�\t5. �ֻ��� ������\t\n");
		printf("\t\t\t\t\t\t\t\t==============================================\n");
		printf("\t\t\t\t\t\t\t\t**********************************************\n");
		printf("\n\t\t\t\t\t\t\t\t��ȣ �Է�(���� 0) : ");
		scanf_s("%d", &choiceMenu);
		system("cls");
		switch (choiceMenu) {
		case 1: 
			textcolor(11);
			RSP_Game();
			system("cls");
			break;
		case 2: 
			textcolor(11);
			ThreeTime();
			system("cls");
			break;
		case 3: 
			textcolor(11);
			//baseBall();
			system("cls");
			break;
		case 4: 
			textcolor(11);
			UpnDown();
			system("cls");
			break;
		case 5: 
			textcolor(11);
			Dice();
			system("cls");
			break;
		case 6: 
			textcolor(11);
			//blackJack or ����
			break;
		default: goto END;
		}
	}
END:
	return 0;
}

//warning �κ� ���� ������ ������ ��ü���� ���� ���� �۾� ���� �޴����� ���� ���ý� system("cls") ��� �ش� �۾��� ������ Sleep(500)�� �ش� ���� ����
// 
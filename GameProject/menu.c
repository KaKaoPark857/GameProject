#include <stdio.h>
#include <windows.h>

int menu() {
	SetConsoleTitle(TEXT("�̴ϰ���õ��"));
	system("mode con cols=200 lines=50 "); //col����/line:����
	int choiceMenu;
	while (1) {
		printf("\t\t\t\t\t\t\t\t**********************************************\n");
		printf("\t\t\t\t\t\t\t\t==================�̴ϰ��� õ��===============\n");
		printf("\t\t\t\t\t\t\t\t1. ����������\t2. 3 6 9 ����\t3. ���� �߱�\n");
		printf("\t\t\t\t\t\t\t\t4. ���� �ٿ�\t5. �ֻ��� ������\t\n");
		printf("\t\t\t\t\t\t\t\t==============================================\n");
		printf("\t\t\t\t\t\t\t\t**********************************************\n"); //\n��ȣ �Է�(���� 0) :
		scanf_s("%d", &choiceMenu);
		system("cls");
		switch (choiceMenu) {
		case 1: RSP_Game();
			system("cls");
			break;
		case 2: ThreeTime();
			system("cls");
			break;
		case 3: //baseBall();
			system("cls");
			break;
		case 4: UpnDown();
			system("cls");
			break;
		case 5: Dice();
			system("cls");
			break;
		case 6: //blackJack or ����
			break;
		default: goto END;
		}
	}
END:
	return 0;
}

//warning �κ� ���� ������ ������ ��ü���� ���� ���� �۾� ���� �޴����� ���� ���ý� system("cls") ��� �ش� �۾��� ������ Sleep(500)�� �ش� ���� ����
// 
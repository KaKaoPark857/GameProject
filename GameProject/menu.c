#include <stdio.h>

int menu() {
	int choiceMenu;
	while (1) {
		printf("1. ����������\t2. 3 6 9 ����\t3. ���� �߱�\n4. ���� �ٿ�\t5. �ֻ��� ������\t\n\n��ȣ �Է�(���� 0) : ");
		scanf_s("%d", &choiceMenu);
		system("cls");
		switch (choiceMenu) {
		case 1: RSP_Game();
			system("cls");
			break;
		case 2: ThreeTime();
			system("cls");
			break;
		/*case 3: RSP_Game();
			system("cls");
			break;
		case 4: test4();
			break;
		case 5: test5();
			break;
		case 6: test6();
			break;*/
		default: goto END;
		}
	}
END:
	return 0;
}
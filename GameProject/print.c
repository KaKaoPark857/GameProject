#include <stdio.h>
#include <stdlib.h>   
#include <time.h> 
#include"numberbaseballUtil.h"


void print() {
    int menu = 0;
    initiliaze(temp);
    
    char choice;
    int temp = 0;
    int player[3];
    printf("\t\t***���ھ߱� ����***\n\n");
    printf("\n1.���Ӽ��� �а� ���� \t2.�ٷ� ���ӽ���\t\t");
    printf("\n\n��ȣ�� �����ϼ���. \n");
    scanf_s("%d", &menu);
    switch (menu)
    {
    case 1:
        printf("=======================���� *�ʵ�* ================================\n");
        printf("1���� 9������ ������ ������ �����մϴ�.\n���ڿ� �ڸ����� ���ٸ� STRIKE ���ڸ� ������ BALL\n");
        printf("��ȸ�� �� 9�� �Դϴ�.\n");
        printf("9������ ������ ���ϸ� �й� \n");
        printf("���ڸ� ������ �����ϸ� �ȵ˴ϴ� 1ĭ�� ����ּ���. \n");
        printf("===================================================================\n");
        break;
    }
    printf("\n\n");
    printf("1ȸ���� 9ȸ���� �õ��� �� �ֽ��ϴ�.\n");




    for (int ct = 0; ct < 9; ct++)
    {
        printf("\n[%dȸ��] ���� 3���� �Է��ϼ���(1 ~ 9������ ���ڸ� �Է�. ���ڴ� 1ĭ�� ���� �մϴ�.) \n", ct + 1);
        
        get_input(player);
        compare_answer_player(answer, player);


        int victory = print_and_check_result();


        if (victory)
        {
            printf("\n\n\n\n\t\t�¸� \n\n\n\n");
            break;
        }


        if (ct == 8)
        {
            printf("\t\t�й�       \n������ %d %d %d\n\n", answer[0], answer[1], answer[2]);
            printf("�ѹ� �� �Ͻðڽ��ϱ�? (y/n) �� �����ּ���");

            while (getchar() != '\n');
            scanf_s("%c", &choice, 4);
            
            if (choice == 'y') {
                system("cls");
                ct = -1;
                initiliaze(temp);
            }
            else if (choice == 'n') {
                printf("�����մϴ�.\n");
                break;
            }

        }
    }
}

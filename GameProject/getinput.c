#include <stdio.h>
#include <stdlib.h>   
#include <time.h> 
#include"numberbaseballUtil.h"
void get_input(int* player) {
    while (1) {
        printf("1���� 9������ ���� �Է����ּ��� : ");
        scanf("%d %d %d", &player[0], &player[1], &player[2]);


        if (player[0] < 1 || player[0] > 9 || player[1] < 1 || player[1] > 9 || player[2] < 1 || player[2] > 9)
        {
            printf("���� ���� ���ڸ� �Է��߽��ϴ�.\n");
            printf("\n");
            continue;
        }
        else if (player[0] == player[1] || player[0] == player[2] || player[1] == player[2])
        {
            printf("�ߺ��� ���ڸ� �Է��߽��ϴ�\n");
            printf("\n");
            continue;
        }
        break;
    }
}
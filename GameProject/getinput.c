#include <stdio.h>
#include <stdlib.h>   
#include <time.h> 
#include"numberbaseballUtil.h"
void get_input(int* player) {
    while (1) {
        printf("1부터 9까지의 수를 입력해주세요 : ");
        scanf("%d %d %d", &player[0], &player[1], &player[2]);


        if (player[0] < 1 || player[0] > 9 || player[1] < 1 || player[1] > 9 || player[2] < 1 || player[2] > 9)
        {
            printf("범위 외의 숫자를 입력했습니다.\n");
            printf("\n");
            continue;
        }
        else if (player[0] == player[1] || player[0] == player[2] || player[1] == player[2])
        {
            printf("중복된 숫자를 입력했습니다\n");
            printf("\n");
            continue;
        }
        break;
    }
}
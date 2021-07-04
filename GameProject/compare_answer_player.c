#include <stdio.h>
#include <stdlib.h>   
#include <time.h> 
#include"numberbaseballUtil.h"

void compare_answer_player(int* answer, int* player)
{
    strike = 0;
    ball = 0;


    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            if (answer[i] == player[j]) {
                if (i == j)
                    strike++;


                else
                    ball++;
            }
}


int print_and_check_result() {

    printf("\t\t\t\t\t\t\t\t");
    printf("[결과] 스트라이크 : %d, 볼 : %d \n\n", strike, ball);


    if (strike == 3) {
        return 1;
    }
    else { return 0; }
}
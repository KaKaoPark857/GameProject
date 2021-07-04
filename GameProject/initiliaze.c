
#include <stdio.h>
#include <stdlib.h>   
#include <time.h> 
#include"numberbaseballUtil.h"

void initiliaze(int temp)
{

    srand((unsigned)time(NULL));
    for (i = 0; i < 3; i++)
    {
        temp = rand() % 9 + 1;
        answer[i] = temp;
        for (j = 0; j < i; j++)
            if (temp == answer[j] && i != j)
                i--;
    }
}
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
    printf("\t\t\t\t\t\t\t\t");
    printf("\t\t***숫자야구 게임***\n\n");
    printf("\n\t\t\t\t\t\t\t\t");
    printf("1.게임설명 읽고 시작 \t2.바로 게임시작\t\t");
    printf("\n\n\t\t\t\t\t\t\t\t");
    printf("번호를 선택하세요 : ");
    scanf_s("%d", &menu);
    switch (menu)
    {
    case 1:
        printf("\t\t\t\t\t\t\t\t");
        printf("=======================설명 *필독* ================================\n");
        printf("\t\t\t\t\t\t\t\t");
        printf("1부터 9까지의 숫자중 세개를 선택합니다.\n");
        printf("\t\t\t\t\t\t\t\t");
        printf("숫자와 자리까지 같다면 STRIKE 숫자만 맞으면 BALL\n");
        printf("\t\t\t\t\t\t\t\t");
        printf("기회는 총 9번 입니다.\n");
        printf("\t\t\t\t\t\t\t\t");
        printf("9번동안 맞추지 못하면 패배 \n");
        printf("\t\t\t\t\t\t\t\t");
        printf("숫자를 붙혀서 선택하면 안됩니다 1칸씩 띄워주세요. \n");
        printf("\t\t\t\t\t\t\t\t");
        printf("===================================================================\n");
        break;
    }
    printf("\n\n");
    printf("\t\t\t\t\t\t\t\t");
    printf("1회에서 9회까지 시도할 수 있습니다.\n");




    for (int ct = 0; ct < 9; ct++)
    {
        printf("\n\t\t\t\t\t\t\t\t");
        printf("[% d회차] 숫자 3개를 입력하세요(1 ~9까지의 숫자를 입력.숫자는 1칸씩 띄우고 합니다.) \n", ct + 1);

        get_input(player);
        compare_answer_player(answer, player);


        int victory = print_and_check_result();


        if (victory)
        {
            printf("\n\n\n\n\t\t\t\t\t\t\t\t");
            printf("\t\t승리 \n\n\n\n");
            break;
        }


        if (ct == 8)
        {
            printf("\n\n\n\n\t\t\t\t\t\t\t\t");
            printf("\t\t패배\n");
            printf("\t\t\t\t\t\t\t\t");
            printf("정답은 % d % d % d\n\n", answer[0], answer[1], answer[2]);
            printf("\t\t\t\t\t\t\t\t");
            printf("한번 더 하시겠습니까? (y/n) 를 눌러주세요");

            while (getchar() != '\n');
            scanf_s("%c", &choice, 4);

            if (choice == 'y') {
                system("cls");
                ct = -1;
                initiliaze(temp);
            }
            else if (choice == 'n') {
                printf("\t\t\t\t\t\t\t\t");
                printf("종료합니다.\n");
                break;
            }

        }
    }
}
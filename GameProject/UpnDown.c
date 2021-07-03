#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void UpnDown() {  //업 엔 다운 게임
	int ud = 0, write = 0, result = 0, count = 1;

	printf("\t\t\t\t\t\t\t\t");
	printf("**********************************\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("**********************************\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("***Up and Down 게임을 시작합니다**\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("**********************************\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("**********************************\n\n");
	
	printf("\t\t\t\t\t\t\t\t숫자 범위를 입력하세요 : "); //끝 범위 정하기.
	scanf_s("%d", &ud);
	
	srand((unsigned int)time(NULL));
	
	result = rand() % ud+1; // 1부터 끝 범위 중 난수 발생.
	//printf("%d \n", result); //결과 중간 개발자 확인용
		
	//무한 루프를 돌려서 정답을 맞출때까지 플레이 or 정해진 횟수안에 맞추기
	//for (int i = 0; i < ud; i++)
	while(1)
	{
		printf("\t\t\t\t\t\t\t\t%d 번째 시도입니다.\t", count);
		printf("값을 입력하세요 : ");
		scanf_s("%d", &write);

		if (write > ud || write <= 0) {
			printf("\n\t\t\t\t\t\t\t\t");
			textcolor(12);
			printf("***********************Warning!!!***********************\n");
			printf("\t\t\t\t\t\t\t\t");
			printf("숫자의 범위를 넘어섰습니다! 1~%d 사이의 숫자를 다시 입력해주세요!\n\n", ud);
			textcolor(11);
			continue;
		}

		if (result < write) //down 일 경우
		{
			printf("\t\t\t\t\t\t\t\t");
			printf("\t\tDOWN입니다!!\n\n");
			count++;
		}
		else if (result == write) //정답일 경우
		{
			printf("\t\t\t\t\t\t\t\t");
			printf("\t\t도전 횟수 : %d번!\n", count);
			printf("\t\t\t\t\t\t\t\t");
			printf("\t\t정답입니다.\n");
			break;
		}
		else //up일 경우
		{
			printf("\t\t\t\t\t\t\t\t");
			printf("\t\tUP입니다!!\n\n");
			count++;
		}
	}
	system("pause");
}


//do while 문 사용
//do
//{
//	printf("%d번째 시도\t", count + 1); // 시도 횟수
//	printf("값을 입력하시오 : "); // 선택 값 입력
//	scanf_s("%d", &write);
//
//	
//	if (result > write)
//	{
//		printf("result 값은 write 값 보다 큽니다.\n");
//		count++;
//	}
//	else if (result == write)
//	{
//			printf("정답입니다.\n");
//	}
//	else
//	{
//			printf("result 값은 write 값 보다 작습니다.\n");
//			count++;
//	}
//} while (result != write);

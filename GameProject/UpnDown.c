#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void UpnDown() {  //�� �� �ٿ� ����
	int ud = 0, write = 0, result = 0, count = 1;

	printf("\t\t\t\t\t\t\t\t");
	printf("**********************************\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("**********************************\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("***Up and Down ������ �����մϴ�**\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("**********************************\n");
	printf("\t\t\t\t\t\t\t\t");
	printf("**********************************\n\n");
	
	printf("\t\t\t\t\t\t\t\t���� ������ �Է��ϼ��� : "); //�� ���� ���ϱ�.
	scanf_s("%d", &ud);
	
	srand((unsigned int)time(NULL));
	
	result = rand() % ud+1; // 1���� �� ���� �� ���� �߻�.
	//printf("%d \n", result); //��� �߰� ������ Ȯ�ο�
		
	//���� ������ ������ ������ ���⶧���� �÷��� or ������ Ƚ���ȿ� ���߱�
	//for (int i = 0; i < ud; i++)
	while(1)
	{
		printf("\t\t\t\t\t\t\t\t%d ��° �õ��Դϴ�.\t", count);
		printf("���� �Է��ϼ��� : ");
		scanf_s("%d", &write);

		if (write > ud || write <= 0) {
			printf("\n\t\t\t\t\t\t\t\t");
			textcolor(12);
			printf("***********************Warning!!!***********************\n");
			printf("\t\t\t\t\t\t\t\t");
			printf("������ ������ �Ѿ���ϴ�! 1~%d ������ ���ڸ� �ٽ� �Է����ּ���!\n\n", ud);
			textcolor(11);
			continue;
		}

		if (result < write) //down �� ���
		{
			printf("\t\t\t\t\t\t\t\t");
			printf("\t\tDOWN�Դϴ�!!\n\n");
			count++;
		}
		else if (result == write) //������ ���
		{
			printf("\t\t\t\t\t\t\t\t");
			printf("\t\t���� Ƚ�� : %d��!\n", count);
			printf("\t\t\t\t\t\t\t\t");
			printf("\t\t�����Դϴ�.\n");
			break;
		}
		else //up�� ���
		{
			printf("\t\t\t\t\t\t\t\t");
			printf("\t\tUP�Դϴ�!!\n\n");
			count++;
		}
	}
	system("pause");
}


//do while �� ���
//do
//{
//	printf("%d��° �õ�\t", count + 1); // �õ� Ƚ��
//	printf("���� �Է��Ͻÿ� : "); // ���� �� �Է�
//	scanf_s("%d", &write);
//
//	
//	if (result > write)
//	{
//		printf("result ���� write �� ���� Ů�ϴ�.\n");
//		count++;
//	}
//	else if (result == write)
//	{
//			printf("�����Դϴ�.\n");
//	}
//	else
//	{
//			printf("result ���� write �� ���� �۽��ϴ�.\n");
//			count++;
//	}
//} while (result != write);

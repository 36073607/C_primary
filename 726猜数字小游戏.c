#define _CRT_SECURE_NO_WARNINGS
//Ԥ��֪ʶ�����������
#include <stdio.h>
#include <stdlib.h>//rand����ʹ��ͷ�ļ�
#include <time.h>//time����ʹ��ͷ�ļ�

int main()
{
	//һ.����ʹ��

	//���ֻ���� time ���� ����ʱ��������ǾͿ�������д��
	time(NULL);

	srand((unsigned int)time(NULL));//srand�������ɶ�ε��ã�Ӧ����д������������
	//�����ڵ��� rand ����֮ǰ�ȵ��� srand ������ͨ�� srand �����Ĳ��� seed ������ rand ���������������ʱ������ӣ�ֻҪ�����ڱ仯��ÿ�����ɵ��������Ҳ�ͱ仯�����ˡ�
	//�������� time ������ʹ srand ���������Ӳ�ͬ���Ӷ�ʹ��rand ��������ÿ�����н����ͬ���������
	
	printf("%d\n", rand());

	//��.����������ķ�Χ
	//���Ҫ����a~b֮�����������������£�
	//a + rand() % (b - a + 1);

	rand() % 100;//�����ķ�ΧΪ0~99
	rand() % 100 + 1;//������ΧΪ0~99��0~99���ּ�1����Χ��1~100
	100 + rand() % (200 - 100 + 1);//������Χ��0~100����100����100~200

	return 0;
}

//1.0�汾�����޴λ���
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menu()
{
	printf("************************\n");
	printf("************************\n");
	printf("***�Ƿ�ʼ��Ϸ?(0/1)***\n");
	printf("************************\n");
	printf("************************\n");
}

void game()
{
	//������һ�������
	int ret = rand() % 100 + 1;

	//�����ù���
	int guess = 0;

	while (1)//���������ѭ��
	{
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}

	}

}


int main()
{
    srand((unsigned int)time(NULL));

	int answer = 0;


	do
	{
		
		menu();
		scanf("%d", &answer);//��δ������ѭ���ڲ����������ѭ���⣬��������01�������ֻ���ѭ��

		switch (answer)
		{
		case 1:
			printf("����������\n");
			game();
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("��������\n");
			break;
		}

	} while (answer);//����֮�ʣ������һ������1������һ�Ѻ�while�ж�1Ϊ�棬��ʼ�ڶ���ѭ���������һ������0��case 0  break����ѭ����while�ж�Ϊ�٣�ѭ������������������while�ж�Ϊ�棬����ѭ������


	return 0;
}

//2.0�汾�����޴λ���
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menu()
{
	printf("************************\n");
	printf("************************\n");
	printf("***�Ƿ�ʼ��Ϸ?(0/1)***\n");
	printf("************************\n");
	printf("************************\n");
}

void game()
{
	//������һ�������
	int ret = rand() % 100 + 1;

	//�����ù���
	int guess = 0;
	int i = 0;
	while (i < 5)
	{
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}
		i++;
	}
	if (5 == i)
		printf("�ܱ�\n");

}


int main()
{

    srand((unsigned int)time(NULL));
	int answer = 0;


	do
	{
		
		menu();
		scanf("%d", &answer);//��δ������ѭ���ڲ����������ѭ���⣬��������01�������ֻ���ѭ��

		switch (answer)
		{
		case 1:
			printf("����������\n");
			game();
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("��������\n");
			break;
		}

	} while (answer);//����֮�ʣ������һ������1������һ�Ѻ�while�ж�1Ϊ�棬��ʼ�ڶ���ѭ���������һ������0��case 0  break����ѭ����while�ж�Ϊ�٣�ѭ������������������while�ж�Ϊ�棬����ѭ������


	return 0;
}

//3.0�汾:�����Զ����������ս
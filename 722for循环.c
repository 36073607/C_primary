#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//forѭ���﷨
//for (���ʽ1; ���ʽ2; ���ʽ3)
//         ѭ�����;

//���ʽ1Ϊ��ʼ�����֣����ڳ�ʼ��ѭ������
//���ʽ2Ϊ�����жϲ��֣������ж�ѭ���Ƿ���ֹ
//���ʽ3Ϊ�������֣�����ѭ�������ĵ���

int main()                                            //     int main ()
{                                                     //   {
	int i = 0;                                        //         int i = 1       //��ʼ��                                                            
	for (i = 1; i <= 10; i++)                         //         while (i <= 10)   //�ж�
	{                                                 //             {                                                       
		printf("%d ", i);                             //                printf("%d ", i);
		printf("hh\n");                               //                i++;        //����
	}                                                 //              }                                                                   
	                                                  //         return 0;                                                                   
	return 0;                                         //                                                                                     
}                                                     //     }                                                                          

int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			break;


		printf("%d ", i); //1 2 3 4
	}
	return 0;
}

int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;

		printf("%d ", i); //1 2 3 4 6 7 8 9 10
	}
	return 0;
}
//ע������forѭ����whileѭ��������ֱ������forѭ���ĵ�������
//��forѭ���ڲ�����ִ����֮��Ž���ѭ�������ĵ���

//tips:
//1.������forѭ�����޸�ѭ����������ֹforѭ��ʧȥ����
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;

		printf("%d ", i); //1
		i = 12;
	}
	return 0;
}
//2.����for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱д��
//   for(i=0;i<10;i++)  ���飬���Ǿ���

//һЩforѭ���ı���
//һ
int main()
{
	for (;;)
	{
		printf("hhh\n");//��ѭ��
	}

	//forѭ���еĳ�ʼ�����֣��жϲ��֣��������ֿ���ʡ�ԣ����������ѧ��ʡ��
	//forѭ�����жϲ���ʡ����ζ���жϻ�����

	return 0;
}
//��
int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("hehe\n");
		}
	}

	return 0;
}//��ӡһ�ٸ�hehe

int main()
{
	int i = 0;
	int j = 0;
	for (; i < 10; i++)
	{
		for (; j < 10; j++)
		{
			printf("hehe\n");
		}
	}

	return 0;
}//��ӡʮ��hehe����ֻ�ڵ�һ��ѭ��������jδ��ʼ�������µڶ���ѭ��jȡ10���޷���ӡ������ѭ��ͬ��

//��
int main()
{

	for (int i = 0; i < 10; i++)
		printf("hehe\n");

	//��д��ֻ��C99֧��

	return 0;
}

//�ģ�ʹ�ö����������ѭ��
int main()
{
	int x, y;
	for (x = 0, y = 0; x < 2 && y>5; ++x, y++)
	{
		printf("hehe\n");
	}

	return 0;
}

//��ϰ
int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)
		k++;
	return 0;
}
//Q:ѭ������ A:0�Σ�������ѭ��
//forѭ���е������жϲ���Ϊ��k��ֵΪ0������0Ϊ�٣��ʲ�����ѭ��!!!!!
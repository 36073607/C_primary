#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1
int main()
{
	printf("%c\n", 'a');
	printf("%c\n", 97);

	return 0;
}

//2 ASC����
int main()
{
	int arr[] = { 11,23,144,56,76 };
	int i = 0;
	int a = sizeof(arr) / sizeof(arr[0]);
	while (i <= a)
	{
		printf("%c", arr[i]);
		i++;
	}
	return 0;
}

//3 ���������������
int main()
{

	int year = 0;
	year >= 1990 && year <= 2015;
	int month = 0;
	month >= 1 && month <= 12;
	int day = 0;
	day >= 1 && day <= 30;

	scanf("%4d %2d %2d", &year, &month, &day);

	printf("year=%4d\n", year);
	printf("month=%02d\n", month);
	printf("day=%02d\n", day);

	return 0;
}

//4 ѧ��������Ϣ��������豸
int main()
{
	int id = 0;
	float c = 0.0f;//Ҫ��f,��Ȼ�ж���double����
	float math = 0.0f;//����Ҫ�����double,����Ҫ�󲻸���float
	float english = 0.0f;
	scanf("%d;%f,%f,%f", &id, &c, &math, &english);
	printf("The each subject score of No.%d is %.2f, %.2f, %.2f.\n", id, c, math, english);

	//ע��ִ��ʱ���뷨�����Ļ���Ӣ��

	return 0;
}

//5 printf�ķ���ֵ
int main()
{
	int n = printf("Hello world!");
	printf("\n%d\n", n);

	return 0;
}

//6 ת���ַ�
int main()
{
	printf("printf(\"hello world\\n\");");

	return 0;
}

//7 �����   ע��scanf����%d����%dΪ������ӿո����\n���ᵼ����������Ż���ʾ���ս��
int main()
{
	//�洢����
	int arr[4] = { 0 };
	//��������
	int t = 0;
	while (t < 4)
	{

		scanf("%d", &arr[t]);
		t++;

	}
	//�Ƚ�
	int max = arr[0];//�������һ���������
	int i = 1;  //�˴�Ҳ����ֱ��д�� t = 1;
	while (i < 4)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}

		i++;

	}

	printf("%d\n", max);



	return 0;
}
//д����
int main()
{
	int i = 1;
	int max = 0;//�����һ�������Ԫ��Ϊ���ֵ
	int n = 0;
	scanf("%d", &max);
	while (i < 4)//Ҫ�������
	{
		scanf("%d", &n);//ÿ�ζ�һ��ֵ�浽n����
		if (n > max)
		{
			max = n;
		}

		i++;
	}

	printf("%d\n", max);
	return 0;
}

//8 ����������
int main()
{
	double r = 0.0f;//�ĳ�double�����f����ȥ��
	scanf("%lf", &r);
	double v = 0.0f;
	v = 4 / 3.0 * 3.1415926 * r * r * r;//�˴���^Ī�������

	printf("%.3lf", v);


	return 0;
}
//��д�淶
int main()
{
	int a = 0;
	float b = 0.0f;
	//0.0Ĭ����double����

	return 0;
}

//����bmi
int main()
{
	int weight = 0;
	int height = 0;
	scanf("%d %d", &weight, &height);

	float bmi = 0.0f;
	bmi = weight / ((height / 100.0) * (height / 100.0));
	//һ��Ҫע�����100.0 !!!
	//Ҳ���� float bmi = weight / ((height / 100.0)*(height / 100.0));
	printf("%.2f\n", bmi);

	return 0;
}
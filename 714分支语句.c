#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//if���
//�﷨�ṹ
//  ��if(���ʽ)��
//        ��䣻

//  ��if(���ʽ)
//        ���1��
//      else
//        ���2��

//  ��.���֧
//   if(���ʽ1)
//	   ���1��
//   else if(���ʽ2)
//	   ���2��
//   else
//	   ���3��

//�ؼ���
// 0.C�����У�0��ʾ�٣���0��ʾ��
// ��.if�������Ƿ� �� �� ����
// ��.��if������Ҫ��Ӷ������ʱ��Ҫ�ŵ�{}���У�elseͬ��



//���ʹ���1
int main()
{
	int a = 10;
	if (a = 3)
		printf("hh");

	//������һ���Ⱥ�= Ϊ��ֵ��if�����ڽ�a����3�����㣬Ϊ�棬���ӡhh
	return 0;
}

//�޸�
int main()
{
	int a = 10;
	if (a == 3)
		printf("hh");


	return 0;
}


//���ʹ���2
int main()
{
	int age = 10;
	if (18 = < age < 28)
		printf("ab");


	return 0;
}

//�޸�
int  main()
{
	int age = 10;
	if (age >= 18 && age < 28)
		printf("ab");


	return 0;
}

//����else ��һ.else�������һ��ifƥ��
//           ��.if��else����������һ�����
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");
	}

	//������Ϊ ��ľ

	return 0;
}

int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)//if(1 == a)
	{
		if (b == 2)
			printf("hehe\n");
	}
	else
			printf("haha\n");
	

	//������Ϊ haha

	return 0;
}

//��ϰ
int main()
{
	int i = 0;
	while (i < 100)
	{
		if (i % 2 == 1)
			printf("%d\n", i);

		i++;
	}


	return 0;
}


//switch��䣺�������ڶ��֧�����
//д if...else if ...else if... ̫����ʱ��������switch���
//�﷨�ṹ��
// switch(���ͱ��ʽ)
// {
//	 �����
//   (break;)
// }

// ������һЩcase���
//  case ���ͳ������ʽ��
//       ��䣻

//ʵ��һ��
int main()
{
	int day;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case7:
		printf("������\n");
		break;
	}


	return 0;
}

//ʾ����������һ����-������
//        ����������-��ĩ
int main()
{
	int day = 0;
	scanf("%d\n", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��ĩ\n");
		break;
	}

	return 0;
}//��ʾ��
//1.case��һ����break
//2.û��breakʱ����ֱ�������ߣ�ʵ�ֶ��caseƥ��ͬһ��ִ�����
//3.ctrl + x ����
//4.һ��ע��case���Ƿ���break

//default��䣺����case����ƥ��ģ�����default
//ʵ��
int main()
{
	int day = 0;
	scanf("%d\n", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��ĩ\n");
		break;

	default:
		printf("ѡ�����\n");

	}

	return 0;
	//ע�⣺switch����е�default�Ӿ���Է���switch����е�����λ��
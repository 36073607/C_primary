#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//do whileѭ���﷨
// do
//     ѭ�����;
// while(���ʽ);

int main()
{
	int i = 1;
	do
	{
		printf("%d ", i);
		i++;

	} 
	while (i <= 10);


	return 0;
}

int main()
{
	int i = 1;
	do
	{
		if (5 == i)
			break;
		printf("%d ", i);
		i++;

	} while (i <= 10);


	return 0;
}//1 2 3 4

int main()
{
	int i = 1;
	do
	{
		i++;
		if (5 == i)
			break;
		printf("%d ", i);
		

	} while (i <= 10);


	return 0;
}//2 3 4

int main()
{
	int i = 1;
	do
	{
		i++;
		if (5 == i)
			continue;
		printf("%d ", i);


	} while (i <= 10);


	return 0;
}//2 3 4 6 7 8 9 10 11

int main()
{
	int i = 1;
	do
	{
		if (5 == i)
			continue;
		printf("%d ", i);
		i++;

	} while (i <= 10);


	return 0;
}//1 2 3 4 (��ѭ��)

//do����ص�
//ѭ������ִ��һ�Σ�ʹ�õĳ������ޣ����Բ��Ǿ���ʹ��

//����n�Ľ׳�(���������)
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 1;
	int x = 1;
	while (i <= n)
	{
		x = x * i;

		i++;
	}
	printf("%d\n", x);
	return 0;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 1;
	int x = 1;
	for (i = 1; i <= n; i++)
		x = x * i;

	printf("%d\n", x);

	return 0;
}
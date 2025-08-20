#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//do while循环语法
// do
//     循环语句;
// while(表达式);

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
}//1 2 3 4 (死循环)

//do语句特点
//循环至少执行一次，使用的场景有限，所以不是经常使用

//计算n的阶乘(不考虑溢出)
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
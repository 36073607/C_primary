#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int Max(int a ,int b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//
//
//}
//
//
//int main()
//{
//
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//利用函数比较大小
//	int x = Max(a, b);
//	//输出
//	printf("%d\n", x);
//
//
//
//
//	return 0;
//}

////int y = 0;
////int fx(int x)
////{
////	if (x < 0)
////	{
////		y = -1;
////		return x;
////	}
////
////	else if (x = 0)
////	{
////		y = 0;
////		return x;
////	}
////	else
////	{
////		y= 1;                             ？这段代码有问题，现在的能力不足以解决
////		return x;
////	}
////
////}
////int main()
////{
////	int x = 0;
////	scanf("%d\n", &x);
////	int t = fx(x);
////	printf("%d\n", t);
////
////	return 0;
////}


//关于上一段代码的另一种书写
////int main()
////{
////	int x = 0;
////	int y = 0;                               解决不了
////	scanf("%d ", &x);
////	if (x > 0)
////		y = -1;
////	else if (x = 0)
////		y = 0;
////	else
////		y = 1;
////
////	return 0;
////}
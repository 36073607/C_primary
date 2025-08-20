#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//define定义标识符常量
#define NUM 100
/*int main()
{
	printf("%d\n", NUM);
	int n = NUM;
	printf("%d\n", n);
	int arr[NUM] = { 0 };

	return 0;
}
*/

//define定义宏：
//     宏名 宏的参数（参数是无类型的）
//      |    |
#define ADD(x,y) ((x)+(y))
//                  宏体
//对比定义函数：
//int Add(int x, int y）
// {
//  	return x + y;
// }
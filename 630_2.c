#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num1 = 114;
	int num2 = 514;
		//输入两个整数
	scanf("%d %d", &num1, &num2);
		//求和
	int sum = num1 + num2; //sum是变量，需要数据类型引入
		//输出
		printf("%d\n", sum);



	return 0;
}
//1.一定注意  ；
//2.scanf_s是VS编译器自己提供的函数，非标准C提供的函数
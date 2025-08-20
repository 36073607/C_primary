#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//定义函数应在主函数之上
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	
	//定义变量
	int n1 = 0;
	int n2 = 0;
	//输入变量
	scanf("%d %d",&n1, &n2);
	//求和
	int sum = Add(n1, n2);
	//输出
	printf("%d\n", sum);






	return 0;
}
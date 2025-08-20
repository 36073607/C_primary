#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1.写一个函数，将参数字符串中的字符反向排列，不是逆序打印
//法一
#include <string.h>
int main()
{
	char arr[] = "abcdef";
	int num = strlen(arr) - 1;
	int left = 0;
	int right = num;
	while (left < right)
	{
		char i = arr[left];
		arr[left] = arr[right];
		arr[right] = i;
		
		left++;
		right--;

	}
	printf("%s", arr);

	return 0;
}
//法二
void reverse(char* arr, int left, int right)
{

	for (; left < right; left++, right--)
	{
		char i = arr[left];
		arr[left] = arr[right];
		arr[right] = i;

	}

}
int main()
{
	char arr[] = "abcdefg";
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 2;
	reverse(arr, left, right);

	printf("%s", arr);


	return 0;
}

#include <string.h>
void reverse(char arr[])//string函数一直读取到、0，所以可以在函数内部使用
{
	int left = 0;
	int right = strlen(arr) - 1;
	while (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;

		left--;
		right++;

	}

}
int main()
{
	char arr[] = "abcdefg";
	reverse(arr);
	printf("%s", arr);

	return 0;
}
//法三 递归，显然用传址函数
void reverse(char* str)//涉及实参的位置改变，故用1传址
{
	//a bcdef g     先将a存起来，再把g赋给a，将g赋成\0形成"bcdef"的数组，（递归），把\0赋成a

	char tmp = *str;//1

	int stl = strlen(str) - 1;
	*str = *(str + stl);//2

	*(str + stl) = '\0';//3

	if (strlen(str + 1) >= 2)//注意从str+1开始记，第一轮已经调换过，所以从下一轮记，越来越趋近于中间
	{
		reverse(str + 1);//递归
	}


	*(str + stl) = tmp;//4

}
int main()
{
	char arr[] = "abcdefg";
	reverse(arr);
	printf("%s", arr);


	return 0;
}
//法四
void reverse(char* str, int left, int right)
{
	char tmp = str[left];
	str[left] = str[right];
	str[right] = tmp;

	if (left <= right)
		reverse(str, ++left, --right);//注意要前置++/--

}

int main()
{
	char arr[] = "abcdefg";
	int left = 0;
	int right = strlen(arr) - 1;

	reverse(arr, left, right);

	printf("%s\n", arr);


	return 0;
}
//注：创建数组一定要记得加[] ！！！

//2.计算一个数的每位之和
int re_sum(int input)
{
	//resum(1234)
	//4+resum(123)
	//4+3+resum(12)
	//4+3+2+resum(1)
	if (input > 9)
		return re_sum(input / 10) + input % 10;
	else
		return input;
}
int main()
{
	int input = 0;
	scanf("%d", &input);

	int ret = re_sum(input);
	printf("%d\n", ret);

	return 0;
}

//3.实现n的k次方
double cf(int n, int k)
{
	if (k > 0)
	{
		return n * cf(n, k - 1);
	}
	else if (k < 0)
	{
		return 1.0 / cf(n, -k);
	}
	else
		return 1;
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);

	double ret = cf(n, k);
	printf("%lf\n", ret);

	return 0;
}
//库函数： double pow(double x,double y);  <math.h>
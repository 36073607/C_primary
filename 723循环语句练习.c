#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//一.计算n的阶乘(不考虑溢出)
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

//二.阶乘求和
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 1;
	int ret = 1;
	int sum = 0;
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
		sum = sum + ret;

	}
	printf("%d", sum);


	return 0;
}

int main()
{
	int n = 1;
	int x = 0;
	scanf("%d", &x);
	int i = 1;
	int t = 1;
	int sum = 0;
	for (n = 1; n <= x; n++)
	{
		t = 1;//关键，否则阶乘不从1开始累乘
		for (i = 1; i <= n; i++)
		{
			t = t * i;
		}
		sum = sum + t;
	}

	printf("%d\n", sum);



	return 0;
}

//三.有序数组查找数据
//遍历法查找
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int k = 7;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (arr[i] == k)
		{
			printf("%d", i);
		}


	}
	if (i == sz)
		printf("err");

	return 0;
}
//二分法查找（条件：有序）
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);

	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{


		int mid = (left + right) / 2;//当数据过大时，可能导致数据溢出
		//int mid = left + (right - left) / 2;    //此为优化写法
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("%d\n", mid);
			break;
		}

	}
	if (left > right)
	{
		printf("err");
	}

	return 0;
}

//四.编写代码，演示多个字符从两端移动，向中间汇聚
//注意：对于字符数组中最后一个字符的序号的书写：
int main()
{
	//求'c'的下标
	char buf[] = { "abc" };//{a b c \0}
	int left = strlen(buf) - 1;//strlen(buf)求数组中的字符个数，读到\0时停止，故strlen(buf)为3，而字符'c'的序号为2，所以减去1
	int right = sizeof(buf) / sizeof(buf[0]) - 2;//sizeof(buf) / sizeof(buf[0])求的是数组中的元素个数，把\0也计算在内，计算结果为4，应减去2


	return 0;
}

int main()
{
	char arr1[] = { "##############" };
	char arr2[] = { "welcome to bit" };

	int left = 0;
	int right = strlen(arr1) - 1;

	while (left < strlen(arr1) - 1)  //判断条件最优写 left<=right || 我自己的写法在两个字符数组一致后仍在运行，由于两个字符数组一致，所以不断地迭代对结果没有影响
	{
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];

		left++;
		right--;

		printf("%s\n", arr1);
	}

	return 0;
}//此代码运行的结果为字符一下就出来了

//使用Sleep函数达到理想效果：
#include <stdio.h>
#include <windows.h>
int main()
{
	char arr1[] = { "##############" };
	char arr2[] = { "welcome to bit" };

	int left = 0;
	int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		printf("%s\n", arr1);

		Sleep(1000);//延缓1000毫秒

		left++;
		right--;
	}

	return 0;
}//但不在同一行实现

//成品
#include <stdio.h>
#include <windows.h>//Sleep头文件
#include <stdlib.h>//system头文件
int main()
{
	char arr1[] = { "##############" };
	char arr2[] = { "welcome to bit" };

	int left = 0;
	int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		printf("%s\n", arr1);

		Sleep(1000);//延缓1000毫秒

		//清空屏幕
		system("cls");//system是一个库函数，可以执行系统命令：clean screen

		left++;
		right--;
	}
	printf("%s\n", arr1);//最后打印一次，防止全都清屏
	return 0;
}

//法二
int main()
{
	char arr1[] = { "##############" };
	char arr2[] = { "welcome to bit" };

	int left = 0;
	int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		printf("%s\r", arr1);// \r代表回车，即到当前行的首位置

		Sleep(1000);//延缓1000毫秒 VS编译器可以不引用头文件就可以使用


		left++;
		right--;
	}
	printf("%s", arr1);
	return 0;
}


//五.模拟用户登录情景，并且只能登陆三次。（只允许输入三次密码，如果密码正确则提示登陆完成，如果三次均输入错误，则退出程序）
//关键：比较2个字符串是否相等，不能用==，而应该使用一个库函数：strcmp   (string compare)
//如果返回值是0，表示2个字符串相等
#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	char password[] = { 0 };
	char correct[] = { "abcde" };


	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:");
		scanf("%s", password);//数组就是一个地址，所以此处不用&

		if (strcmp(password, correct) == 0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码输入错误\n");
		}
	}
	if (i == 3)
	{
		printf("三次密码均输入错误，退出程序\n");
	}

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//一维数组
// 
//1. 一维数组的创建和初始化
//1.1 数组的创建
//数组是一组相同类型元素的集合
int main()
{
	int arr[10];
	char ch[5];
	double data[20];

	int arr1[10] = { 0 };

	//下面的代码只能在支持C99的编译器上编译
	int n = 10;
	scanf("%d", &n);
	int arr2[n];//这种数组是不能初始化的
	//在C99标准之前，数组的大小必须是常量或者常量表达式
	//在C99之后，数组的大小可以是变量，这是为了支持变长数组（变长数组：数组大小是通过变量指定的）

	return 0;
}

//1.2 数组的初始化
int main()
{
	//不完全初始化，剩余的元素默认初始化为0
	int arr[10] = { 1,2,3 };
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int arr2[] = { 1,2,3 };

	char ch1[10] = { 'a','b','c' };
	//a b c 0 0 0 0 0 0 0
	char ch2[10] = "abc";
	//a b c \0 0 0 0 0 0 0
	char ch3[] = { 'a','b','c' };
	char ch4[] = "abc";

	//注：
	char arr3[] = { 'b','i','t' };
	printf("%d\n", strlen(arr3));  //随机值
	char arr4[3] = { 'b','i','t' };
	printf("%d\n", strlen(arr4));  //随机值
	char arr5[4] = { 'b','i','t' };
	printf("%d\n", strlen(arr5));  //3

	//要想让数组为字符数组，末尾必须是\0，否则不能以字符串的形式打印
	return 0;
}

//1.3 一维数组的使用
int main()
{
	int arr[] = { 1,2,3,4,5 };
	//            0       4
	//打印单个元素：
	printf("%d ", arr[3]);

	//打印所有元素：
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	//倒着打印
	for (i = sz - 1; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
//总结：
//1.数组是使用下标来访问的，下标是从0开始。
//2.数组的大小可以通过计算得到。

//1.4 一维数组在内存中的存储
//一维数组在内存中是连续存放的，每个地址之间相距4个字节


//二维数组
//
// 2.1 二维数组的创建
int main()
{
	int arr[3][4]; //三行四列：三行，每行4个元素
	char arr1[3][5];//三行五列
	double arr2[2][4];//两行四列

	return 0;
}

//2.2二维数组的初始化
int main()
{
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int arr1[3][4] = { 1,2,3,4 };//不完全初始化，剩余元素默认初始化为0

	int arr2[3][4] = { {1,2},{2,3,4,5},{2}};//每一行的元素用{}，未初始化的部分默认初始化为0

	int arr3[][4] = { {1,2,3,4},{2,3} };//二维数组可以省略行数，但列数不能省略（每行几个元素不能省略）
	int arr4[][4] = { 1,2,3,4,5,6 };

	//补充：三维数组只能省略第一维，第二维和第三维不能省略
	
	return 0;
}

// 2.3二维数组的使用
int main()
{
	int arr[3][3] = { 1,2,3,2,3,4,3,4,5 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);//自定义输入内容
		}
		printf("\n");
	}

	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	//访问单个元素
	printf("%d\n", arr[1][0]);

	return 0;
}
//可以把二维数组理解为：一维数组的数组

//2.4 二维数组在内存中的存储
int main()
{
	int arr[3][3] = { 1,2,3,2,3,4,3,4,5 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 3; j++)
		{
			printf("arr[%d][%d]=%p\n", i, j, &arr[i][j]);
		}
	}

	return 0;
}
//二维数组在内存中也是连续存放
int main()
{
	int arr1[3][4];
	int arr2[12];
	//二者在内存中布局的方式一致
	return 0;
}

//3.数组越界
int main()
{
	int arr[] = { 1,2,3,4,5,6 };//0~5 
	int i = 0;
	for (i = 0; i < 10; i++)//0~9
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
//虽然编译器不报错，但代码就是有问题
int main()
{
	int arr[3][3] = { 1,2,3,2,3,4,3,4,5 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);//1 2 3 2 2 3 4 3 3 4 5 -858993460
		}
	}

	return 0;
}


//冒泡排序：
//核心思想：两个相邻的元素进行比较
//一趟冒泡排序让一个数据来到它最终应该出现的位置上！
//n个元素需要n-1次排序
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	for (i = 1; i < sz; i++)//一共冒泡n-1轮
	{
		for (j = 0; j < sz - i; j++)//冒泡一轮
		{
			if (arr[j] < arr[j + 1])//两个元素间判断一次
			{
				int t = 0;
				t = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = t;
			}

		}

	}

}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };//利用冒泡排序降序排列
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);

	int i = 0;
	while (i < sz)
	{
		printf("%d ", arr[i]);
		i++;
	}

	return 0;
}

//4.数组名是什么？
int main()
{
	int arr[10];
	printf("%p\n", arr);//arr就是首元素的地址
	printf("%p\n", arr + 1);

	printf("%p\n", &arr[0]);//首元素的地址
	printf("%p\n", &arr[0] + 1);

	printf("%p\n", &arr);//数组的地址
	printf("%p\n", &arr + 1);//+1后直接到数组末位，整个数组也就过去了


	//printf("%d\n", sizeof(arr));

	return 0;
}
//总结：数组名确实能表示首元素的地址，但是有两个例外：
//1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2. &(数组名)，这里的数组名表示整个数组，取出的是整个数组的地址

//二维数组的数组名的理解
int main()
{
	int arr[3][4];
	printf("%d\n", sizeof(arr));//48

	//将二维数组想象成一维数组的数组：
	//则，二维数组的数组名表示第一个一维数组的地址，即第一行的地址 arr[0][]

	//计算行数：总元素的大小除以一行元素总大小
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));

	//计算列数：一行的总元素大小除以一个元素的大小
	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));


	return 0;

}


//附：字符串初始化
#include<stdio.h>
#include<string.h>
int main()
{
	//错误写法
	char str[11];
	str1 = "HelloWorld";

	//正确写法
	char str2[11];
	strcpy(str2,"HelloWorld");
	return 0;
}

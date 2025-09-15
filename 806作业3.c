#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1.
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (i = 5)//这是赋值，每次循环i都被赋值成5
			printf("%d", i);//死循环打印5
	}
	return 0;
}
//注意：char 也是属于整型家族，因为字符存储的时候，存储的是ASCII码值
//所以，case后的表达式可以是整型常量表达式，也可以是char类型

//2.
int func(int a)
{
	int b;
	switch (a)
	{
	case 1:
		b = 30;
	case 2:
		b = 20;
	case 3:
		b = 16;
	default:
		b = 0;
	}
	return b;
}
//q:func(1)=?
//a:由于没有break,程序最终走default，b=0.


//3.写代码将3个整数从大到小输出：
void move(int* x, int* y)//让x成为函数两个参量中最大的
{
	int z = 0;
	if (*x < *y)
	{
		z = *y;
		*y = *x;
		*x = z;

	}

}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	//创造一个函数，使两个参量互换---传址
	move(&a, &b);
	move(&a, &c);//a是三者中最大的
	int tmp = 0;
	move(&b, &c);

	//这么输出的话得让a是最大的，c是最小的
	printf("%d %d %d\n", a, b, c);


	return 0;
}

//4.写一个代码打印1-100之间所有3的倍数的数字
int main()
{
	int i = 0;
	for (i = 3; i <= 100; i += 3)
	{

		printf("%d ", i);

	}

	return 0;
}

//5.给定两个数，求两个数的最大公约数
int min(int a, int b)
{
	if (a > b)
		return b;
	else
		return a;

}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	int i = 0;
	int ret = min(a, b);//int ret = (a < b) ? a : b;
	for (i = ret; i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("%d\n", i);
			break;
		}


	}

	return 0;
}
//辗转相除法
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int c = 0;
	if (a > b)
	{
		c = a % b;
		while (c != 0)
		{
			a = b;
			b = c;
			c = a % b;

		}
		if (c == 0)
			printf("%d\n", b);

	}
	else
	{
		c = b % a;
		while (c != 0)
		{
			b = a;
			a = c;
			c = b % a;

		}
		if (c == 0)
			printf("%d\n", a);

	}

	return 0;
}
//优化：真正理解辗转相除
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int c = 0;

	while (c = a % b)//即使a<b，在第二次循环后：b赋值给了a，此时a>b！！！
	{
		a = b;
		b = c;
	}

	printf("%d\n", b);

	return 0;
}
//ps:最小公倍数*最大公约数=两个原数相乘
//经验：需要两个数互换时，需要第三个参量进行协助

//6.  1-100中出现了几个包含9的数字
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		//判断个位是否为9
		if ((i + 1) % 10 == 0)// 也可以写成：  i % 10 == 9
			count++;
		//判断十位是否为9
		else if (i / 10 == 9)
			count++;
	}

	//99进入第一个if判断完毕就不会进入else if；要想进入十位是否为9的判断应写成：if(...)  ,不能加else
	printf("%d\n", count);

	return 0;
}
//辨析：  1-100中出现了几个9
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		//判断个位是否为9
		if ((i + 1) % 10 == 0)// 也可以写成：  i % 10 == 9
			count++;
		//判断十位是否为9
		if (i / 10 == 9)
			count++;
	}

	//99进入第一个if判断完毕就不会进入else if；要想进入十位是否为9的判断应写成：if(...)  ,不能加else
	printf("%d\n", count);

	return 0;
}

//7.计算：1/1 - 1/2 + 1/3 - 1/4 + 1/5 ... +1/99 - 1/100 的值，打印出结果
int main()
{
	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum = sum + (flag) * (1.0 / i);

		flag = -flag;

	}

	printf("%lf", sum);

}

//8.求10个整数中的最大值
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	while (i < 10)
	{
		scanf("%d", &arr[i]);
		i++;
	}

	int max = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}

	}

	printf("%d\n", max);

	return 0;
}
//注：典型错误
//int arr[] = {0};
//这里没有指定数组的元素个数，就会根据初始化的内容来推算元素的个数
//等同于： int arr[1] = {0};


//9.乘法口诀表
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ", i, j, i * j);
			//注：%d*%d=%2d 表示以两位整数输出，如果不满两位就以空格填充（右对齐）
			//%d*%d=%02d 表示以两位整数输出，如果不满两位就以0填充（右对齐）
			//%d*%d=%-2d  （两位左对齐）
		}

		printf("\n");
	}

	return 0;
}

//10：函数调用 exec((v1,v2),(v3,v4),v5,v6); 中，实参的个数是  4
//（ ，）这是逗号表达式

//11.把函数处理结果的两个数据返回给主函数，在下面的方法中不正确的是（A）
//A: return 这两个数
int test()
{
	return 3, 4;//逗号表达式从左至右计算，整个表达式的结果是最后一个表达式的结果
}
int main()
{
	int ret = test();
	printf("%d\n", ret);//4

	return 0;
}
//B:形参用数组
void test(int arr[])
{
	arr[0] = 3;  //arr[0]--->*(arr+0)
	arr[1] = 4;  //arr[1]--->*(arr+1)

}
int main()
{
	int arr[2] = { 0 };
	test(arr);

	printf("%d %d", arr[0], arr[1]);//3 4

	return 0;
}
//C:形参用两个指针
void test(int* a, int* b)
{
	*a = 3;
	*b = 4;

}
int main()
{
	int a = 0;
	int b = 0;
	test(&a, &b);
	printf("%d %d", a, b);

	return 0;
}
//D:用两个全局变量
int a = 0;
int b = 0;
void test()
{
	a = 3;
	b = 4;

}
int main()
{
	test();
	printf("%d %d", a, b);

	return 0;
}

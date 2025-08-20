#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//c语言常用库函数
//1.IO函数 2.字符串操作函数 3.字符操作函数 4.内存操作函数 5.时间/日期函数 6.数学函数 7.其他库函数
//学习几个库函数：
//strcpy: string copy
#include <string.h>
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello world";

	strcpy(arr1, arr2);//strcpy(destination,source);

	printf("%s\n", arr1);


	return 0;
}

//memset: memory(内存) set
int main()
{
	char arr[] = { "hello world" };
	memset(arr, 'x', 5);
	printf("%s\n", arr);

	char arr2[] = { "hello world" };
	memset(arr2 + 6, 'y', 3);
	printf("%s\n", arr2);

	return 0;
}

//自定义函数
int getmax(int x, int y)
{
	return (x > y ? x : y);
}
void test()
{
	printf("hh");
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	int c = getmax(a, b);

	printf("%d\n", c);
	test();

	return 0;
}

//写一个函数可以交换两个整型变量的内容
//典型错解
//x,y是形式参数
void exchange(int x, int y)
{
	int z = 0;
	z = x;
	x = y;
	y = z;
}
//当实参传递给形参的时候，形参是实参的一份临时拷贝
//对形参的影响不会影响实参

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	//a,b时实参
	exchange(a, b);

	printf("%d %d", a, b);

	return 0;
}
//正确范例
void swap(int* px, int* py)
{
	int z = *px;//z=a
	*px = *py;//a=b
	*py = z;//b=a

}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	swap(&a, &b);

	printf("%d %d\n", a, b);


	return 0;
}

//函数的参数：
//实际参数（实参）
//实参可以是：常量，变量，表达式，函数等
//无论实参是何种类型的量，在进行函数调用时，它们都必须有确定的值，以便把这些值传送给形参

//形式参数（形参）
//形式参数是指函数名后括号中的变量，因为形式参数只有在函数被调用的过程中才实例化（分配内存单元），所以叫形式参数。
//形式参数当函数调用完成之后就自动销毁了，因此形式参数只在函数中有效

//形参实例化之后其实相当于实参的一份临时拷贝
//对形参的修改不能改变实参


//函数的调用：
//1.传值调用：
//函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参
//2.传址调用：
//传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式
//这种传参方式可以让函数和函数外边的变量建立起真正的联系，也就是函数内部可以直接操作函数外部的变量

//练习：
//1.写一个函数可以判断一个数是不是素数
#include <stdio.h>
int judge(int x)
{
	int y = 0;
	int z = 0;
	int p = 0;
	for (y = 1; y <= x; y++)
	{
		z = x % y;
		if (z == 0)
		{
			p++;
		}
	}

	return p;
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	int q = judge(a);
	if (q >= 3)
		printf("合数\n");
	else if (q == 2)
		printf("素数\n");
	else
		printf("双非\n");

	return 0;
}

//2.打印100-200之间的素数
#include <stdio.h>
int judge(int x)
{
	int y = 0;
	int z = 0;
	int p = 0;
	for (y = 1; y <= x; y++)
	{
		z = x % y;
		if (z == 0)
		{
			p++;
		}
	}

	return p;
}

int main()
{
	int ret = 0;
	for (ret = 100; ret <= 200; ret++)
	{
		int jet = judge(ret);
		if (jet == 2)
			printf("%d\n", ret);

	}

	return 0;
}

//法二：
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		//是素数就打印
		//用2~i-1之间数字去试除i
		int flag = 1;//flag是1，表示是素数
		int j = 0;
		for (j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			printf("%d ", 1);
	}
	return 0;
}
//法二的优化：利用合数的因数一定小于合数的开方 来优化
#include <math.h>
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		//是素数就打印
		//用2~i-1之间数字去试除i
		int flag = 1;//flag是1，表示是素数
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			printf("%d ", 1);
	}
	return 0;
}
//法二的二次优化：由于偶数中只有2是质数，大可直接从奇数当中找
#include <math.h>
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 101; i <= 200; i+=2)
	{
		//判断i是否为素数
		//是素数就打印
		//用2~i-1之间数字去试除i
		int flag = 1;//flag是1，表示是素数
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			printf("%d ", 1);
	}
	return 0;
}

//法三：
#include <stdio.h>
#include <math.h>//别忘了头文件
int prime(int a)
{
	int j = 0;

	for (j = 2; j <= sqrt(a); j++)
	{
		if (a % j == 0)
		{
			return 0;
		}
	}

	return 1;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i += 2)
	{
		if (prime(i))
		{
			printf("%d ", i);
			count++;
		}

	}
	printf("\n%d\n", count);

	return 0;
}

//3.打印一千到两千年之间的闰年(leap year)
//提示：判断闰年的两个要求：
//1.能被4整除，并且不能被100整除的是闰年
//2.能被400整除的是闰年
//法一：
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			printf("%d ", year);
			count++;
		}

	}
	printf("\n%d\n", count);
	return 0;
}
//法二：
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0)
		{
			if (year % 100 != 0)
			{
				printf("%d ", year);
				count++;
			}
		}
		if (year % 400 == 0)//注意此处不能写成 else if ，否则1200，1600，2000不会进入整除400的判断！
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\n%d\n", count);
	return 0;
}

//法三：
int judge(int a)
{

	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
	{
		return 1;
	}
	else
		return 0;
}

int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (judge(year))
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\n%d\n", count);
	return 0;
}

//法四：
void judge(int a)
{
	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
		printf("%d ", a);
}

int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		judge(year);
	}

	return 0;
}
//与法三相比，该函数用法不够单一，若只想判断闰年，则该函数无法实现
//总结：函数的功能一定要有针对性，足够单一！！！，做到高内聚（功能独立）低耦合（自己跟别人尽量没关系）

//4.写一个函数，实现一个整型有序数组的二分查找
//经验：先把这个函数怎么用想好，再去写这个函数
#include <stdio.h>
int binary_search(int arr[], int k, int sz)//学习此处函数自变量为数组的写法：arr[]；形参arr看上去是数组，本质是指针变量
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;//此处left,right,mid均为元素下标，这样写防止数据过大从而导致数据溢出
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
			return mid;
	}
	if (left > right)
	{
		return -1;
	}

}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//待查找元素
	int sz = sizeof(arr) / sizeof(arr[0]);
	//binary_search(arr, k, sz);//该函数需要数组，待查找元素，数组元素个数；总结2；总结3
	//若查找成功，则返回元素的下标
	//若失败，则返回-1（不返回0是防止元素本身下标就是0）
	int ret = binary_search(arr, k, sz);//注意函数的返回值要存储起来，便于打印
	if (ret)
		printf("%d ", ret);
	if (ret == -1)
		printf("err\n");

	return 0;
}
//总结：1.形参和实参的名字可以相同，也可以不同
//2.数组传参的时候直接写数组名
//3.数组传参时，实际上传递的是首元素的地址（是个指针变量），因此不能在binary_search函数内部计算数组元素个数，所以binary_search函数要包含sz参数
//若将sz的计算放到binary_search函数内部，该函数只需两个参数，但由于只有首地址（是个指针变量）的关系，binary_search内部的sz计算当中的sizeof(arr)是能是4（32位）或8（64位）
//3*.数组传参实际上传递的是数组首元素的地址，而不是整个数组，所以在函数内部计算一个函数参数部分的数组的元素个数是不靠谱的

//补充：布尔类型：
//C99中引入了布尔类型(bool)用来表示真假
//bool是用来表示真假的变量     eg：bool flag = true/false;
//示例：
#include <stdio.h>
#include <math.h>
#include <stdbool.h>//布尔类型头文件
bool prime(int a)
{
	int j = 0;

	for (j = 2; j <= sqrt(a); j++)
	{
		if (a % j == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i += 2)
	{
		if (prime(i))
		{
			printf("%d ", i);
			count++;
		}

	}
	printf("\n%d\n", count);

	return 0;
}

//5.写一个函数，每调用一次这个函数，就会将num的值增加1
#include <stdio.h>
void ADD(int* p)
{
	(*p)++;//(*p)要加括号
}

int main()
{
	int num = 0;
	ADD(&num);//每调用一次，num值都改变，该函数应该传址
	printf("%d\n", num);//1
	ADD(&num);
	printf("%d\n", num);//2

	return 0;
}
//法二：
#include <stdio.h>
int ADD(int p)
{
	return ++p;//这里使用前置++，是因为如果使用后置++，会导致“先使用，后++”，直接返回了，不会使值增加；此处写return p + 1;一致
}

int main()
{
	int num = 0;
	num = ADD(num);
	printf("%d\n", num);//1
	num = ADD(num);
	printf("%d\n", num);//2

	return 0;
}
//经验：创建函数尽量不使用全局变量


//函数的嵌套调用和链式访问
//1.函数不可嵌套定义
//2.链式访问：把一个函数的返回值作为其他函数的参数（核心）
//3.链式访问的前提条件：函数得有返回值
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	//每一个printf函数返回的是其这一次打印的字符的个数
	//最内部的printf先发动，打印43，返回2；再发动中间的pf，由于最内部的pf返回2，所以中间的pf打印2，返回1；最后最外部的pf发动，打印中间pf的返回值1
	//因而最终结果为 4321
	return 0;
}
//经验：函数不写返回值的时候，默认返回类型为int
//经验：写了返回类型但又不返回，某些编译器默认返回该函数内部最后一条指令执行的结果
//经验：该写法明确说明main函数不需要参数，但本质上main函数是有参数的
int main(void)
{
	return 0;
}
//main函数有3个参数
int main(int argc, char* argv[], char* envp[])
{
	return 0;
}


//函数的声明和定义
#include <stdio.h>
//函数的声明
int ADD(int x, int y);//也可以直接写成 int ADD(int,int);

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	int ret = ADD(a, b);

	printf("%d\n", ret);

	return 0;
}
//函数的定义
int ADD(int x, int y)
{
	return x + y;
}
//总结：
//函数声明：1.函数的声明一般出现在函数的使用之前。要满足 先声明后使用 2.函数的声明一般要放在头文件中的（若模块分开）
//头文件的包含就是将头文件中的内容拷贝过来

//(重要)导入静态库的方法： #pragma comment(lib,"add.lib")
//ps:可以通过反编译的手段破解静态库


//函数递归:化大为小，减少重复计算
//示例一：接受一个整型值（无符号），按照顺序打印它的每一位。
#include <stdio.h>
void print(unsigned int n)
{
	if (n > 9)//这个if语句是关键，如果没有，则函数会陷入死递归：栈溢出
	{
		print(n / 10);
	}

	printf("%u ", n % 10);

}

int main()
{
	unsigned int a = 0;
	scanf("%u", &a);

	print(a);
	//print(1234)
	//print(123) 4
	//print(12) 3 4
	//print(1) 2 3 4

	return 0;
}
//递归的两个必要条件：
//1.存在限制条件，当满足这个限制条件的时候，递归便不再继续
//2.每次递归调用之后越来越接近这个限制条件

//示例二：
//编写函数不允许创建临时变量，求字符串的长度
//前置：写strlen函数
#include <stdio.h>
int mystrlen(char str[])//此处写 int mystrlen(char* str) 一样，字符数组只会传递第一个字符的地址
{
	int count = 0;
	while (*str != '\0')
	{
		str++;//找下一个字符，每个字符只占1个字节
		count++;//计数，临时变量 
	}

	return count;
}

int main()
{
	char arr[] = "abcd";
	int ret = mystrlen(arr);
	printf("%d\n", ret);

	return 0;
}
//
#include <stdio.h>
int mystrlen(char* str)
{
	//msl(abc)
	//1+msl(bc)
	//1+1+msl(c)
	if (*str != '\0')//注意要加*
	{
		return 1 + mystrlen(str + 1);//str前不加char*是因为函数体里的my_strlen()是函数的调用而非定义
		//或者写成 1+mystrlen(++str);
	}
	else
		return 0;


}

int main()
{
	char arr[] = "abc";
	int ret = mystrlen(arr);
	printf("%d\n", ret);

	return 0;
}
//将函数递推与高中数列递推式联想


//函数递归与迭代
//循环是迭代的一种
//练习：求n的阶乘
//递归的方式
int fac(int a)
{
	while (a > 1)
	{
		a = a * fac(a - 1);
		return a;
	}
	if (a == 1)
	{
		return 1;
	}

}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fac(n);
	printf("%d\n", ret);

	return 0;
}
//迭代的方式
int fac(int a)
{
	int i = 0;
	int j = 1;
	for (i = 1; i <= a; i++)
	{
		j = j * i;//或写成 j *= i;
	}
	return j;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fac(n);
	printf("%d\n", ret);


	return 0;
}

//练习：求第n个斐波那契数（不考虑溢出）
//递归
int fib(unsigned int a)
{
	if (a >= 3)
	{
		return fib(a - 1) + fib(a - 2);
	}
	else if (a == 2 || a == 1)
	{
		return 1;
	}

}

int main()
{
	unsigned int n = 0;
	scanf("%u", &n);

	int ret = fib(n);

	printf("%d\n", ret);

	return 0;
}
//运用递归的方法重复计算特别多，不是优解

//迭代
int fib(int a)
{
	int i = 0;
	int j = 1;
	int q = 1;
	int z = 0;
	for (i = 3; i <= a; i++)//注意i从3开始，如果从一开始会多算次数
	{
		z = j + q;
		j = q;
		q = z;

	}
	return z;

}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);

	return 0;
}
//或者：
int fib(int a)
{

	int j = 1;
	int q = 1;
	int z = 1;//如果n=1，不进入该循环，直接返回z，所以z要赋值为1
	while (a >= 3)
	{
		z = j + q;
		j = q;
		q = z;

		a--;
	}

	return z;

}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);

	return 0;
}
//总结：先用递归尝试，若写出来后没有明显缺陷（速率低下、栈溢出等），则用递归；否则用迭代。
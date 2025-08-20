#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 7 / 2;
	int b = 7 % 2;
	printf("%d\n", a);//a=3
	printf("%d\n", b);//取模，b=1
	//除号的两端都是整数的时候，执行的是整数除法；如果两端只要有一个浮点数就执行浮点数的除法
	float c = 7 / 2.0;
	printf("%f\n", c);
	printf("%.1f\n", c);//保留一位小数
	printf("%.2f\n", c);//保留两位小数
	//取模操作的两端只能是整数
	
	
	return 0;
}


int main()
{
	int a = 0;//初始化       int a = 5; 也是初始化
	a = 20;//赋值

	a = a + 3;
	a += 3;

	a = a - 3;
	a -= 3;


	return 0;
}




//c语言中，0表示假，非0表示真        单目操作符’！‘ ：表示逻辑反操作，即假的变成真，真的变成假
int main()
{
	int a = 0;
	if (!a)
	{
		printf("%d\n", 114514);
	}

	int b = 2;
	if (!b)
	{
		printf("%d\n", 1919810);
	}

	return 0;
}



//sizeof是单目操作符，指操作数的类型长度（以字节为单位）
int main()
{
	int a = 10;
	printf("%d\n", sizeof(a));//正确 4
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof a);//4
	printf("%d\n", sizeof int);//错误

	return 0;
}




//数据类型：
//短整型：short 2
//整形：int 4
//长整型：long 4
//长长整型：long long 8
//字符型：char 1
//单精度浮点型：float 4
//双精度浮点型：double 8
//长双精度浮点型：long double 8
//*布尔类型：bool 1



int main()
{   //回忆这段代码
	char arr[] = { 'b','i','t' };//[b i t][     ?       ]
	printf("%d\n", strlen(arr));  //随机值  不知道\0位置在哪

	int arr[10] = { 0 };//整型没有\0：整型数据不是以\0结束的，而字符数组最后要存放一个\0
	printf("%d\n", sizeof(arr));//40,计算的是整个数组的大小,单位是字节
	//这个数组十个元素，每个元素是一个整型，每个整型4个字节，所以40个字节

	printf("%d\n", sizeof(arr[0]));//4
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//10，即为数组的元素个数：数组总大小（字节）/每个元素所占大小（字节）





	return 0;
}


int main()
{
	//int a = 10;
	//int b = a++;//后置++，先使用，后++ ：int b = a;   a = a + 1;
	//printf("%d\n", b);//10
	//printf("%d\n", a);//11

	//int a = 10;
	//int b = ++a;//前置++，先++，后使用 : a = a + 1; int b = a;
	//printf("%d\n", b);//11
	//printf("%d\n", a);//11

	return 0;
}



//强制转换
int main()
{

	double a= 3.14;
	printf("%d\n", a);

	//int a = 3.14 <<err
	
	int c = (int)3.14;
	printf("%d\n", c);//3，强制转换为整型（取整）

	//int c = int (3.14) <<err

	return 0;
}




//关系操作符

    !=用于测试“不相等”
	==用于测试“相等”！！！
	【区分】【易错】：
	 = 是赋值运算符：x=y指将y赋值于a
	 == 是比较运算符






   && 逻辑与 - 并且
   || 逻辑或 - 或者






//浅谈if

  int a =10;
  int b =20;
  if（a=b)---把b赋值给a，并判断a是否为0，来判断真假
  if(a&&b)---a和b都是真才行
  if（a||b)---a和b任意一个是真就行





//条件操作符/三目操作符：
   格式; exp1 ? exp2 ：exp3
           真    √     ×
		   假    ×     √

   eg: int a = 10;
       int b = 20;
	   int r = a > b ? a : b
	   printf("%d\n",r);//结果为20




//逗号表达式就是逗号隔开的一串表达式
//逗号表达式的特点是：从左至右依次计算，整个表达式的结果就是最后一个表达式的结果
int main()
{
	int a = 78;
	int b = 13;
	int c = (a = a + b, b = a - 2 * b, a + b);
	printf("%d\n", c);
	return 0;
}



int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//这是定义数组的一种语法形式
	arr[3] = 20;//[]就是下标引用操作符 arr和3就是[]的操作数

	return 0;
}

//注意;
//int arr[10]={1,2,3,4};
//int n = 3;
//arr[n]=20;     可以正常运行:访问元素时[]内可以是变量
//但
//int n =10;
//int arr[n]={1,2,3,4}；   不能运行：定义数组大小时，[]内最好用常量
 


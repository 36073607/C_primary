#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//if语句
//语法结构
//  Ⅰ：if(表达式)；
//        语句；

//  Ⅱ：if(表达式)
//        语句1；
//      else
//        语句2；

//  Ⅲ.多分支
//   if(表达式1)
//	   语句1；
//   else if(表达式2)
//	   语句2；
//   else
//	   语句3；

//关键：
// 0.C语言中，0表示假，非0表示真
// Ⅰ.if括号内是否 真 或 非零
// Ⅱ.当if语句后面要添加多条语句时，要放到{}当中；else同理



//典型错例1
int main()
{
	int a = 10;
	if (a = 3)
		printf("hh");

	//解析：一个等号= 为赋值，if括号内将a赋成3，非零，为真，则打印hh
	return 0;
}

//修改
int main()
{
	int a = 10;
	if (a == 3)
		printf("hh");


	return 0;
}


//典型错例2
int main()
{
	int age = 10;
	if (18 = < age < 28)
		printf("ab");


	return 0;
}

//修改
int  main()
{
	int age = 10;
	if (age >= 18 && age < 28)
		printf("ab");


	return 0;
}

//悬空else ：一.else和最近的一个if匹配
//           二.if和else合起来才是一条语句
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");
	}

	//输出结果为 滚木

	return 0;
}

int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)//if(1 == a)
	{
		if (b == 2)
			printf("hehe\n");
	}
	else
			printf("haha\n");
	

	//输出结果为 haha

	return 0;
}

//练习
int main()
{
	int i = 0;
	while (i < 100)
	{
		if (i % 2 == 1)
			printf("%d\n", i);

		i++;
	}


	return 0;
}


//switch语句：常常用于多分支的情况
//写 if...else if ...else if... 太复杂时，考虑用switch语句
//语法结构：
// switch(整型表达式)
// {
//	 语句项
//   (break;)
// }

// 语句项：是一些case语句
//  case 整型常量表达式：
//       语句；

//实例一：
int main()
{
	int day;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case7:
		printf("星期天\n");
		break;
	}


	return 0;
}

//示例二：星期一到五-工作日
//        星期六到天-周末
int main()
{
	int day = 0;
	scanf("%d\n", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("周末\n");
		break;
	}

	return 0;
}//启示：
//1.case后不一定加break
//2.没有break时程序直接往下走，实现多个case匹配同一个执行语句
//3.ctrl + x 剪切
//4.一定注意case后是否有break

//default语句：所有case不能匹配的，走入default
//实例
int main()
{
	int day = 0;
	scanf("%d\n", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("周末\n");
		break;

	default:
		printf("选择错误\n");

	}

	return 0;
	//注意：switch语句中的default子句可以放在switch语句中的任意位置
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//for循环语法
//for (表达式1; 表达式2; 表达式3)
//         循环语句;

//表达式1为初始化部分，用于初始化循环变量
//表达式2为条件判断部分，用于判断循环是否终止
//表达式3为调整部分，用于循环条件的调整

int main()                                            //     int main ()
{                                                     //   {
	int i = 0;                                        //         int i = 1       //初始化                                                            
	for (i = 1; i <= 10; i++)                         //         while (i <= 10)   //判断
	{                                                 //             {                                                       
		printf("%d ", i);                             //                printf("%d ", i);
		printf("hh\n");                               //                i++;        //调整
	}                                                 //              }                                                                   
	                                                  //         return 0;                                                                   
	return 0;                                         //                                                                                     
}                                                     //     }                                                                          

int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			break;


		printf("%d ", i); //1 2 3 4
	}
	return 0;
}

int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;

		printf("%d ", i); //1 2 3 4 6 7 8 9 10
	}
	return 0;
}
//注意其在for循环和while循环的区别：直接跳到for循环的调整部分
//当for循环内部彻底执行完之后才进行循环条件的调整

//tips:
//1.不可在for循环内修改循环变量，防止for循环失去控制
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;

		printf("%d ", i); //1
		i = 12;
	}
	return 0;
}
//2.建议for语句的循环控制变量的取值采用“前闭后开区间”写法
//   for(i=0;i<10;i++)  建议，不是绝对

//一些for循环的变种
//一
int main()
{
	for (;;)
	{
		printf("hhh\n");//死循环
	}

	//for循环中的初始化部分，判断部分，调整部分可以省略，但不建议初学者省略
	//for循环的判断部分省略意味着判断会恒成立

	return 0;
}
//二
int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("hehe\n");
		}
	}

	return 0;
}//打印一百个hehe

int main()
{
	int i = 0;
	int j = 0;
	for (; i < 10; i++)
	{
		for (; j < 10; j++)
		{
			printf("hehe\n");
		}
	}

	return 0;
}//打印十个hehe，且只在第一次循环：由于j未初始化，导致第二次循环j取10，无法打印，后续循环同理

//三
int main()
{

	for (int i = 0; i < 10; i++)
		printf("hehe\n");

	//此写法只在C99支持

	return 0;
}

//四：使用多个变量控制循环
int main()
{
	int x, y;
	for (x = 0, y = 0; x < 2 && y>5; ++x, y++)
	{
		printf("hehe\n");
	}

	return 0;
}

//练习
int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)
		k++;
	return 0;
}
//Q:循环几次 A:0次，不进入循环
//for循环中的条件判断部分为将k赋值为0，由于0为假，故不进入循环!!!!!
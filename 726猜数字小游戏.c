#define _CRT_SECURE_NO_WARNINGS
//预备知识：生成随机数
#include <stdio.h>
#include <stdlib.h>//rand函数使用头文件
#include <time.h>//time函数使用头文件

int main()
{
	//一.基础使用

	//如果只是让 time 函数 返回时间戳，我们就可以这样写：
	time(NULL);

	srand((unsigned int)time(NULL));//srand函数不可多次调用，应将其写在主函数当中
	//程序在调用 rand 函数之前先调用 srand 函数，通过 srand 函数的参数 seed 来设置 rand 函数生成随机数的时候的种子，只要种子在变化，每次生成的随机数列也就变化起来了。
	//我们引入 time 函数来使 srand 函数的种子不同，从而使得rand 函数产生每次运行结果不同的随机数。
	
	printf("%d\n", rand());

	//二.设置随机数的范围
	//如果要生成a~b之间的随机数，方法如下：
	//a + rand() % (b - a + 1);

	rand() % 100;//余数的范围为0~99
	rand() % 100 + 1;//余数范围为0~99，0~99数字加1，范围是1~100
	100 + rand() % (200 - 100 + 1);//余数范围是0~100，加100后是100~200

	return 0;
}

//1.0版本：无限次机会
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menu()
{
	printf("************************\n");
	printf("************************\n");
	printf("***是否开始游戏?(0/1)***\n");
	printf("************************\n");
	printf("************************\n");
}

void game()
{
	//先生成一个随机数
	int ret = rand() % 100 + 1;

	//再设置规则
	int guess = 0;

	while (1)//恒成立，恒循环
	{
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}

	}

}


int main()
{
    srand((unsigned int)time(NULL));

	int answer = 0;


	do
	{
		
		menu();
		scanf("%d", &answer);//这段代码放入循环内部，如果放在循环外，假如输入01以外数字会死循环

		switch (answer)
		{
		case 1:
			printf("请输入数字\n");
			game();
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("继续输入\n");
			break;
		}

	} while (answer);//神来之笔：如果第一次输入1，玩完一把后while判断1为真，开始第二次循环；如果第一次输入0，case 0  break跳出循环后while判断为假，循环结束；如果输入错误，while判断为真，继续循环！！


	return 0;
}

//2.0版本：有限次机会
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menu()
{
	printf("************************\n");
	printf("************************\n");
	printf("***是否开始游戏?(0/1)***\n");
	printf("************************\n");
	printf("************************\n");
}

void game()
{
	//先生成一个随机数
	int ret = rand() % 100 + 1;

	//再设置规则
	int guess = 0;
	int i = 0;
	while (i < 5)
	{
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
		i++;
	}
	if (5 == i)
		printf("败北\n");

}


int main()
{

    srand((unsigned int)time(NULL));
	int answer = 0;


	do
	{
		
		menu();
		scanf("%d", &answer);//这段代码放入循环内部，如果放在循环外，假如输入01以外数字会死循环

		switch (answer)
		{
		case 1:
			printf("请输入数字\n");
			game();
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("继续输入\n");
			break;
		}

	} while (answer);//神来之笔：如果第一次输入1，玩完一把后while判断1为真，开始第二次循环；如果第一次输入0，case 0  break跳出循环后while判断为假，循环结束；如果输入错误，while判断为真，继续循环！！


	return 0;
}

//3.0版本:开局自定义次数并挑战
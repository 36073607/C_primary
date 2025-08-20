#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		printf("%d\n", i);
		i++;

	}

	return 0;
}

int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			break; //用于永久的跳过循环
		
		printf("%d\n", i);
		i++;

	}
	//1 2 3 4
	return 0;
}

int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;  //跳过本次循环，后面的代码不触发，直接去判断部分，进行下一次循环的判断
		
		printf("%d\n", i);
		i++;

	}
	// 1 2 3 4 （死循环）
	return 0;
}

int main()
{
	int i = 1;
	while (i <= 10)
	{
		i++;
		if (5 == i)
			continue;
		
		printf("%d\n", i);
		
	}
	// 2 3 4 6 7 8 9 10 11
	return 0;
}





//补充：
int main()
{
	int ch = getchar();  //getchar函数用来获取字符
	//打印的两种方式：
	printf("%c\n", ch);
	putchar(ch);

	EOF; //end of line
	//转到定义： #define EOF    (-1)

	//由于EOF的存在（EOF定义为-1），所以规定 int 来使用getchar()

	return 0;

}

int main()
{
	int ch = getchar();
	while ((ch = getchar()) != EOF)
		putchar(ch);

//终止此代码的方式：ctrl + Z
	return 0;
}
//用途：清除缓存

//示例：
int main()
{
	printf("请输入密码:");
	char password[] = { 0 };
	scanf("%s", password);

	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}

	printf("是否确认密码(Y/N):");
	int jet = getchar();
	if (putchar(jet) == 'Y')
		printf("yes\n");
	else
		printf("no\n");


	return 0;
}
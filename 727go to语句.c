#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//实践中没有goto语句也可以很容易写出代码
//但在某些场合下goto语句还是用得着的，例如：终止程序在某些深度嵌套的结构的处理过程
//eg:一次跳出两层或者多层循环
//多层循环这种情况使用break是达不到目的的，他只能从最内层循环退出到上一层循环

//恒循环
int main ()
{
again:
	printf("hh");
	goto again;

	return 0;
}
//goto语句不能跨函数使用

//goto语句真正适合的场景如下：
int main()
{
	for (...)
		for (...)
		{
			for (...)
			{
				if (disaster)
					goto error;
			}

		}
error:
	if(disaster)
		//处理错误情况

	return 0;
}

#include <stdio.h>
#include <windows.h>
#include <string.h>//strcmp头文件
int main()
{
	char ret[20] = { 0 };//经验：当数组初始化时[]内最好输入数据
	system("shutdown -s -t 60");
again:

	printf("input hyb or your computer will close\n");
	scanf("%s", ret);

	if (strcmp(ret, "hyb") == 0)
	{
		system("shutdown -a");
	}
	else
		goto again;

	return 0;
}

#include <stdio.h>
#include <windows.h>
#include <string.h>//strcmp头文件
int main()
{
	char ret[20] = { 0 };
	char jet[20] = { "我再也不打go了" };
	system("shutdown -s -t 60");
again:

	printf("input %s or your computer will close\n", jet);
	scanf("%s", ret);

	if (strcmp(ret, jet) == 0)
	{
		system("shutdown -a");
	}
	else
		goto again;

	return 0;
}
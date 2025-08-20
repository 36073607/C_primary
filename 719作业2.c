#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1
int main()
{
	printf("%c\n", 'a');
	printf("%c\n", 97);

	return 0;
}

//2 ASCⅡ码
int main()
{
	int arr[] = { 11,23,144,56,76 };
	int i = 0;
	int a = sizeof(arr) / sizeof(arr[0]);
	while (i <= a)
	{
		printf("%c", arr[i]);
		i++;
	}
	return 0;
}

//3 出生日期输入输出
int main()
{

	int year = 0;
	year >= 1990 && year <= 2015;
	int month = 0;
	month >= 1 && month <= 12;
	int day = 0;
	day >= 1 && day <= 30;

	scanf("%4d %2d %2d", &year, &month, &day);

	printf("year=%4d\n", year);
	printf("month=%02d\n", month);
	printf("day=%02d\n", day);

	return 0;
}

//4 学生基本信息输入输出设备
int main()
{
	int id = 0;
	float c = 0.0f;//要加f,不然判定成double类型
	float math = 0.0f;//精度要求高用double,精度要求不高用float
	float english = 0.0f;
	scanf("%d;%f,%f,%f", &id, &c, &math, &english);
	printf("The each subject score of No.%d is %.2f, %.2f, %.2f.\n", id, c, math, english);

	//注意执行时输入法是中文还是英文

	return 0;
}

//5 printf的返回值
int main()
{
	int n = printf("Hello world!");
	printf("\n%d\n", n);

	return 0;
}

//6 转移字符
int main()
{
	printf("printf(\"hello world\\n\");");

	return 0;
}

//7 最大数   注：scanf函数%d（以%d为例）后加空格或者\n都会导致输入两遍才会显示最终结果
int main()
{
	//存储数据
	int arr[4] = { 0 };
	//输入数据
	int t = 0;
	while (t < 4)
	{

		scanf("%d", &arr[t]);
		t++;

	}
	//比较
	int max = arr[0];//不妨设第一个数据最大
	int i = 1;  //此处也可以直接写： t = 1;
	while (i < 4)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}

		i++;

	}

	printf("%d\n", max);



	return 0;
}
//写法二
int main()
{
	int i = 1;
	int max = 0;//假设第一个输入的元素为最大值
	int n = 0;
	scanf("%d", &max);
	while (i < 4)//要求读三次
	{
		scanf("%d", &n);//每次读一个值存到n里面
		if (n > max)
		{
			max = n;
		}

		i++;
	}

	printf("%d\n", max);
	return 0;
}

//8 计算球的体积
int main()
{
	double r = 0.0f;//改成double后，这个f可以去掉
	scanf("%lf", &r);
	double v = 0.0f;
	v = 4 / 3.0 * 3.1415926 * r * r * r;//此处用^莫名其妙报错

	printf("%.3lf", v);


	return 0;
}
//书写规范
int main()
{
	int a = 0;
	float b = 0.0f;
	//0.0默认是double类型

	return 0;
}

//计算bmi
int main()
{
	int weight = 0;
	int height = 0;
	scanf("%d %d", &weight, &height);

	float bmi = 0.0f;
	bmi = weight / ((height / 100.0) * (height / 100.0));
	//一定要注意除以100.0 !!!
	//也可以 float bmi = weight / ((height / 100.0)*(height / 100.0));
	printf("%.2f\n", bmi);

	return 0;
}
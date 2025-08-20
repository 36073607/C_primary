#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char arr1[] = { "abcdrfg" };
	char arr2[] = {'x','y','z','\0','q'};
	char otto = 't';
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", "are you");
	printf("%c\n", otto);
	printf("%d\n", strlen("c:\test\628\test.c"));//14个字符！！！！，\t和\62均只算一个字符（八进制只有0-7，故8没算进\ddd八进制转义字符；\t在字符串中只算一个字符，但它的效果相当于4个字符）
	printf("c:\test\628\test.c");
	
	printf("//")
	char arr3[] = { 'b','i','t' };
	printf("%d\n", strlen(arr3));  //随机值
	char arr4[3] = { 'b','i','t' };
	printf("%d\n", strlen(arr4));  //随机值
	char arr5[4] = { 'b','i','t' };
	printf("%d\n", strlen(arr5));  //3；不完全初始化，剩余的的部分默认初始化为0
	
	//C99标准之前，数组的大小都是用常量或者常量表达式来指定
	//int arr[10]={0};
	//int arr[4+6]={1,2,3,4};

	//C99标准之后，支持了变长数组，这个时候允许数组的大小为变量，但这种指定方式的数组是不能初始化的。
	/*
	   int m = 100;
	   int arr4[m];  正确           int arr4[m]={1,2};错误
	*/;



	return 0;
}


//%d打印整型
//%s打印字符串
//%c打印字符
//%f打印float类型的数据
//%lf打印double类型的数据
//%p是以地址的格式打印数据，eg:printf("%p\n",&a}; 存储：int* p = &a;   而p就是指针变量

/*
转义字符：
\n回车换行
\t水平制表符（横向跳格）           
\0（空字符）
\a响铃
\r回车
\ddd八进制所代表的字符
\xdd十六进制所代表的字符

0与\0的ASC码值均为0

*/



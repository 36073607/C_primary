#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 10; //向内存申请4个字节来存储10
	//&a;//取地址操作符
	//printf("%p\n", &a);//0x0012ff48
	int* p = &a;//p就是指针变量
	*p = 20;// * 是 解引用操作符 ，意思是通过p中存放的地址，找到1p所指向的对象，*p就是p所指向的对象
	printf("%d\n", a);//20



	return 0;
}
//内存单元：
//编号->地址-> 地址也被称为指针
//存放指针（地址）的变量就是指针变量

// int 说明p指向的对象是int 类型的
// * 说明p是指针变量

//指针就是地址，指针变量就是用来存放地址的


//指针变量的大小
int main()
{
	//不管是什么类型的指针，都是在创建指针变量
	//指针变量是用来存放地址的
	//指针变量的大小取决于地址的大小
	//32位机器上的地址：32bit-4byte，所以指针变量的大小是4个字节  x86 32位平台下指针是由32个01组成的二进制序列，需要32个比特位空间
	//64位机器上的地址：64bit-8byte，所以指针变量的大小是8个字节  x64 64位平台下指针是由64个01组成的二进制序列，需要64个比特位空间

	printf("%zu\n", sizeof(char*));// 4/8
	printf("%zu\n", sizeof(short*));// 4/8
	printf("%zu\n", sizeof(int*));// 4/8
	printf("%zu\n", sizeof(float*));// 4/8
	printf("%zu\n", sizeof(double*));// 4/8



	return 0;
}

int* p1, p2, p3; //p1才是指针变量，p2和p3都是整型
int* p1, * p2, * p3;//这样，p1,p2,p3才是指针变量
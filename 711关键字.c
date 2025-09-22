#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//typedef 类型重命名，只能针对类型

typedef unsigned int unit;
int main()
{
	unsigned int num = 0;
	unit num2 = 1;         
	
	return 0;
}


typedef struct Node
{
	int data;
	struct Node* nextl
}Node;
//写法二：
//typedef struct
//{
//	int data;
//	struct Node* nextl
//}Node;
int main()
{
	struct Node n;
	Node n2;
	return 0;
}




//static：
//c语言中，static是用来修饰变量和汉书的：
//1.修饰局部变量-称为静态局部变量
//2.修饰全局变量-称为静态全局变量
//3.修饰函数-称为静态函数


//1.修饰局部变量
void test()//void表示函数不需要任何返回
{
	static int a = 1;//加入进行static辨析
	a++;
	printf("%d\n", a);
}
int main()
{
	int i = 0;                         
	while (i < 10)
	{
		test();
		i++;
	}
	return 0;
}
//注：static修饰局部变量的时候，局部变量出了作用域，不销毁。
//本质上，static修饰局部变量的时候，改变了变量的存储位置。
//影响了变量的生命周期，生命周期变长，和程序的生命周期一致。            附：调用其他源文件的函数，变量需要提前声明，借用extern

//2.修饰全局变量
//全局变量是具有外部链接属性的，但static修饰全局变量的时候，这个全局变量的外部链接属性就变成了内存链接属性。
//其他源文件(.c)就不能再使用到这个全局变量了。

//3.修饰函数
//一个函数本来是具有外部链接属性的，但是被static修饰的时候，外部链接属性就变成了内部连接属性，其他源文件(.c)就无法使用了。

//寄存器变量 register
int main()
{
	register int num = 3;//建议，3存放在寄存中，注意是建议，并非一定储存在寄存器中
	return 0;
}



// 硬盘--内存--高速缓存--寄存器（从左至右运行速度变快，空间变小，造价变高

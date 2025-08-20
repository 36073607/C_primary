#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1.结构体的声明
//1.1 结构的基础知识
//结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量

//1.2 结构体的声明
struct Peo//创建类型不占用内存
{
	char name[20];              //{}内就是成员变量
	char tele[12];//11位电话号码和\0
	char sex[5];//一个汉字等于两个字符
	int height;

};
//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int height;
//
//}p1,p2; //p1和p2是使用struct Peo结构类型创建的两个变量
//且这里的p1,p2是两个全局的结构体变量

int main()
{
	struct Peo p1;//结构体变量的创建，占用内存

	return 0;
}

//1.3 结构成员的类型：标量、数组、指针、甚至是其他结构体
struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];
	int height;

};
struct St
{
	struct Peo p;
	int num;
	float f;

};

//1.4 结构体变量的定义和初始化
struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];
	int height;

}p3,p4;
struct Peo p5, p6;
//p3,p4,p5,p6都是全局变量
struct St
{
	struct Peo p;
	int num;
	float f;

};
int main()
{
	struct Peo p1 = { "张三","15566668888","男",181 };
	struct St s = { {"李四","16677889110","男",178},1378,14.3f };//浮点数默认为double类型，要使其为float类型，需要加f

	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.height);
	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.height, s.num, s.f);

	return 0;
}
//浮点数在内存中不能精确保存

//2.结构体成员的访问、结构体传参
struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];
	int height;

};

void print1(struct Peo p)
{
	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.height);//结构体变量.成员变量
}

void print2(struct Peo* p)
{
	printf("%s %s %s %d\n", p->name, p->tele, p->sex, p->height);//结构体指针->成员变量
}

int main()
{
	struct Peo p1 = { "张三","15566668888","男",181 };

	print1(p1);

	print2(&p1);

	return 0;
}
//首选print2函数
//函数传参的时候，参数是需要压栈的，如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，所以会导致性能的下降
//结论：结构体传参的时候，要传结构体的地址


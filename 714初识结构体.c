#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//学生
struct Stu
{
	//成员
	char name[20];
	int age;
	char sex[10];
	char tele[12];

};   //此处的  ； 是系统自动补充，不可能不加
void print(struct Stu* ps)
{
	//->
	//结构体指针变量 -> 成员名
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);//写法一
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);//写法二          用法前提：得到了一个地址
}
int main()
{
	struct Stu a = { "hyb",18,"male","188666" };
	//结构体对象 . 成员名
	//printf("%s %d %s %s\n", a.name, a.age, a.sex, a.tele);   用法前提;得到了一个结构体对象

	print(&a);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//ѧ��
struct Stu
{
	//��Ա
	char name[20];
	int age;
	char sex[10];
	char tele[12];

};   //�˴���  �� ��ϵͳ�Զ����䣬�����ܲ���
void print(struct Stu* ps)
{
	//->
	//�ṹ��ָ����� -> ��Ա��
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);//д��һ
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);//д����          �÷�ǰ�᣺�õ���һ����ַ
}
int main()
{
	struct Stu a = { "hyb",18,"male","188666" };
	//�ṹ����� . ��Ա��
	//printf("%s %d %s %s\n", a.name, a.age, a.sex, a.tele);   �÷�ǰ��;�õ���һ���ṹ�����

	print(&a);
	return 0;
}
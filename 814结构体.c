#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1.�ṹ�������
//1.1 �ṹ�Ļ���֪ʶ
//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���

//1.2 �ṹ�������
struct Peo//�������Ͳ�ռ���ڴ�
{
	char name[20];              //{}�ھ��ǳ�Ա����
	char tele[12];//11λ�绰�����\0
	char sex[5];//һ�����ֵ��������ַ�
	int height;

};
//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int height;
//
//}p1,p2; //p1��p2��ʹ��struct Peo�ṹ���ʹ�������������
//�������p1,p2������ȫ�ֵĽṹ�����

int main()
{
	struct Peo p1;//�ṹ������Ĵ�����ռ���ڴ�

	return 0;
}

//1.3 �ṹ��Ա�����ͣ����������顢ָ�롢�����������ṹ��
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

//1.4 �ṹ������Ķ���ͳ�ʼ��
struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];
	int height;

}p3,p4;
struct Peo p5, p6;
//p3,p4,p5,p6����ȫ�ֱ���
struct St
{
	struct Peo p;
	int num;
	float f;

};
int main()
{
	struct Peo p1 = { "����","15566668888","��",181 };
	struct St s = { {"����","16677889110","��",178},1378,14.3f };//������Ĭ��Ϊdouble���ͣ�Ҫʹ��Ϊfloat���ͣ���Ҫ��f

	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.height);
	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.height, s.num, s.f);

	return 0;
}
//���������ڴ��в��ܾ�ȷ����

//2.�ṹ���Ա�ķ��ʡ��ṹ�崫��
struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];
	int height;

};

void print1(struct Peo p)
{
	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.height);//�ṹ�����.��Ա����
}

void print2(struct Peo* p)
{
	printf("%s %s %s %d\n", p->name, p->tele, p->sex, p->height);//�ṹ��ָ��->��Ա����
}

int main()
{
	struct Peo p1 = { "����","15566668888","��",181 };

	print1(p1);

	print2(&p1);

	return 0;
}
//��ѡprint2����
//�������ε�ʱ�򣬲�������Ҫѹջ�ģ��������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½�
//���ۣ��ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ


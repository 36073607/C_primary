#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���庯��Ӧ��������֮��
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	
	//�������
	int n1 = 0;
	int n2 = 0;
	//�������
	scanf("%d %d",&n1, &n2);
	//���
	int sum = Add(n1, n2);
	//���
	printf("%d\n", sum);






	return 0;
}
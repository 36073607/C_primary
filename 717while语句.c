#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		printf("%d\n", i);
		i++;

	}

	return 0;
}

int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			break; //�������õ�����ѭ��
		
		printf("%d\n", i);
		i++;

	}
	//1 2 3 4
	return 0;
}

int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;  //��������ѭ��������Ĵ��벻������ֱ��ȥ�жϲ��֣�������һ��ѭ�����ж�
		
		printf("%d\n", i);
		i++;

	}
	// 1 2 3 4 ����ѭ����
	return 0;
}

int main()
{
	int i = 1;
	while (i <= 10)
	{
		i++;
		if (5 == i)
			continue;
		
		printf("%d\n", i);
		
	}
	// 2 3 4 6 7 8 9 10 11
	return 0;
}





//���䣺
int main()
{
	int ch = getchar();  //getchar����������ȡ�ַ�
	//��ӡ�����ַ�ʽ��
	printf("%c\n", ch);
	putchar(ch);

	EOF; //end of line
	//ת�����壺 #define EOF    (-1)

	//����EOF�Ĵ��ڣ�EOF����Ϊ-1�������Թ涨 int ��ʹ��getchar()

	return 0;

}

int main()
{
	int ch = getchar();
	while ((ch = getchar()) != EOF)
		putchar(ch);

//��ֹ�˴���ķ�ʽ��ctrl + Z
	return 0;
}
//��;���������

//ʾ����
int main()
{
	printf("����������:");
	char password[] = { 0 };
	scanf("%s", password);

	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}

	printf("�Ƿ�ȷ������(Y/N):");
	int jet = getchar();
	if (putchar(jet) == 'Y')
		printf("yes\n");
	else
		printf("no\n");


	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1.
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (i = 5)//���Ǹ�ֵ��ÿ��ѭ��i������ֵ��5
			printf("%d", i);//��ѭ����ӡ5
	}
	return 0;
}
//ע�⣺char Ҳ���������ͼ��壬��Ϊ�ַ��洢��ʱ�򣬴洢����ASCII��ֵ
//���ԣ�case��ı��ʽ���������ͳ������ʽ��Ҳ������char����

//2.
int func(int a)
{
	int b;
	switch (a)
	{
	case 1:
		b = 30;
	case 2:
		b = 20;
	case 3:
		b = 16;
	default:
		b = 0;
	}
	return b;
}
//q:func(1)=?
//a:����û��break,����������default��b=0.


//3.д���뽫3�������Ӵ�С�����
void move(int* x, int* y)//��x��Ϊ������������������
{
	int z = 0;
	if (*x < *y)
	{
		z = *y;
		*y = *x;
		*x = z;

	}

}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	//����һ��������ʹ������������---��ַ
	move(&a, &b);
	move(&a, &c);//a������������
	int tmp = 0;
	move(&b, &c);

	//��ô����Ļ�����a�����ģ�c����С��
	printf("%d %d %d\n", a, b, c);


	return 0;
}

//4.дһ�������ӡ1-100֮������3�ı���������
int main()
{
	int i = 0;
	for (i = 3; i <= 100; i += 3)
	{

		printf("%d ", i);

	}

	return 0;
}

//5.�������������������������Լ��
int min(int a, int b)
{
	if (a > b)
		return b;
	else
		return a;

}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	int i = 0;
	int ret = min(a, b);//int ret = (a < b) ? a : b;
	for (i = ret; i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("%d\n", i);
			break;
		}


	}

	return 0;
}
//շת�����
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int c = 0;
	if (a > b)
	{
		c = a % b;
		while (c != 0)
		{
			a = b;
			b = c;
			c = a % b;

		}
		if (c == 0)
			printf("%d\n", b);

	}
	else
	{
		c = b % a;
		while (c != 0)
		{
			b = a;
			a = c;
			c = b % a;

		}
		if (c == 0)
			printf("%d\n", a);

	}

	return 0;
}
//�Ż����������շת���
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int c = 0;

	while (c = a % b)//��ʹa<b���ڵڶ���ѭ����b��ֵ����a����ʱa>b������
	{
		a = b;
		b = c;
	}

	printf("%d\n", b);

	return 0;
}
//ps:��С������*���Լ��=����ԭ�����
//���飺��Ҫ����������ʱ����Ҫ��������������Э��

//6.  1-100�г����˼�������9������
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		//�жϸ�λ�Ƿ�Ϊ9
		if ((i + 1) % 10 == 0)// Ҳ����д�ɣ�  i % 10 == 9
			count++;
		//�ж�ʮλ�Ƿ�Ϊ9
		else if (i / 10 == 9)
			count++;
	}

	//99�����һ��if�ж���ϾͲ������else if��Ҫ�����ʮλ�Ƿ�Ϊ9���ж�Ӧд�ɣ�if(...)  ,���ܼ�else
	printf("%d\n", count);

	return 0;
}
//������  1-100�г����˼���9
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		//�жϸ�λ�Ƿ�Ϊ9
		if ((i + 1) % 10 == 0)// Ҳ����д�ɣ�  i % 10 == 9
			count++;
		//�ж�ʮλ�Ƿ�Ϊ9
		if (i / 10 == 9)
			count++;
	}

	//99�����һ��if�ж���ϾͲ������else if��Ҫ�����ʮλ�Ƿ�Ϊ9���ж�Ӧд�ɣ�if(...)  ,���ܼ�else
	printf("%d\n", count);

	return 0;
}

//7.���㣺1/1 - 1/2 + 1/3 - 1/4 + 1/5 ... +1/99 - 1/100 ��ֵ����ӡ�����
int main()
{
	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum = sum + (flag) * (1.0 / i);

		flag = -flag;

	}

	printf("%lf", sum);

}

//8.��10�������е����ֵ
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	while (i < 10)
	{
		scanf("%d", &arr[i]);
		i++;
	}

	int max = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}

	}

	printf("%d\n", max);

	return 0;
}
//ע�����ʹ���
//int arr[] = {0};
//����û��ָ�������Ԫ�ظ������ͻ���ݳ�ʼ��������������Ԫ�صĸ���
//��ͬ�ڣ� int arr[1] = {0};


//9.�˷��ھ���
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ", i, j, i * j);
			//ע��%d*%d=%2d ��ʾ����λ������������������λ���Կո���䣨�Ҷ��룩
			//%d*%d=%02d ��ʾ����λ������������������λ����0��䣨�Ҷ��룩
			//%d*%d=%-2d  ����λ����룩
		}

		printf("\n");
	}

	return 0;
}

//10���������� exec((v1,v2),(v3,v4),v5,v6); �У�ʵ�εĸ�����  4
//�� �������Ƕ��ű��ʽ

//11.�Ѻ������������������ݷ��ظ���������������ķ����в���ȷ���ǣ�A��
//A: return ��������
int test()
{
	return 3, 4;//���ű��ʽ�������Ҽ��㣬�������ʽ�Ľ�������һ�����ʽ�Ľ��
}
int main()
{
	int ret = test();
	printf("%d\n", ret);//4

	return 0;
}
//B:�β�������
void test(int arr[])
{
	arr[0] = 3;  //arr[0]--->*(arr+0)
	arr[1] = 4;  //arr[1]--->*(arr+1)

}
int main()
{
	int arr[2] = { 0 };
	test(arr);

	printf("%d %d", arr[0], arr[1]);//3 4

	return 0;
}
//C:�β�������ָ��
void test(int* a, int* b)
{
	*a = 3;
	*b = 4;

}
int main()
{
	int a = 0;
	int b = 0;
	test(&a, &b);
	printf("%d %d", a, b);

	return 0;
}
//D:������ȫ�ֱ���
int a = 0;
int b = 0;
void test()
{
	a = 3;
	b = 4;

}
int main()
{
	test();
	printf("%d %d", a, b);

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//c���Գ��ÿ⺯��
//1.IO���� 2.�ַ����������� 3.�ַ��������� 4.�ڴ�������� 5.ʱ��/���ں��� 6.��ѧ���� 7.�����⺯��
//ѧϰ�����⺯����
//strcpy: string copy
#include <string.h>
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello world";

	strcpy(arr1, arr2);//strcpy(destination,source);

	printf("%s\n", arr1);


	return 0;
}

//memset: memory(�ڴ�) set
int main()
{
	char arr[] = { "hello world" };
	memset(arr, 'x', 5);
	printf("%s\n", arr);

	char arr2[] = { "hello world" };
	memset(arr2 + 6, 'y', 3);
	printf("%s\n", arr2);

	return 0;
}

//�Զ��庯��
int getmax(int x, int y)
{
	return (x > y ? x : y);
}
void test()
{
	printf("hh");
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	int c = getmax(a, b);

	printf("%d\n", c);
	test();

	return 0;
}

//дһ���������Խ����������ͱ���������
//���ʹ��
//x,y����ʽ����
void exchange(int x, int y)
{
	int z = 0;
	z = x;
	x = y;
	y = z;
}
//��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
//���βε�Ӱ�첻��Ӱ��ʵ��

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	//a,bʱʵ��
	exchange(a, b);

	printf("%d %d", a, b);

	return 0;
}
//��ȷ����
void swap(int* px, int* py)
{
	int z = *px;//z=a
	*px = *py;//a=b
	*py = z;//b=a

}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	swap(&a, &b);

	printf("%d %d\n", a, b);


	return 0;
}

//�����Ĳ�����
//ʵ�ʲ�����ʵ�Σ�
//ʵ�ο����ǣ����������������ʽ��������
//����ʵ���Ǻ������͵������ڽ��к�������ʱ�����Ƕ�������ȷ����ֵ���Ա����Щֵ���͸��β�

//��ʽ�������βΣ�
//��ʽ������ָ�������������еı�������Ϊ��ʽ����ֻ���ں��������õĹ����в�ʵ�����������ڴ浥Ԫ�������Խ���ʽ������
//��ʽ�����������������֮����Զ������ˣ������ʽ����ֻ�ں�������Ч

//�β�ʵ����֮����ʵ�൱��ʵ�ε�һ����ʱ����
//���βε��޸Ĳ��ܸı�ʵ��


//�����ĵ��ã�
//1.��ֵ���ã�
//�������βκ�ʵ�ηֱ�ռ�в�ͬ�ڴ�飬���βε��޸Ĳ���Ӱ��ʵ��
//2.��ַ���ã�
//��ַ�����ǰѺ����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ
//���ִ��η�ʽ�����ú����ͺ�����ߵı�����������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�ı���

//��ϰ��
//1.дһ�����������ж�һ�����ǲ�������
#include <stdio.h>
int judge(int x)
{
	int y = 0;
	int z = 0;
	int p = 0;
	for (y = 1; y <= x; y++)
	{
		z = x % y;
		if (z == 0)
		{
			p++;
		}
	}

	return p;
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	int q = judge(a);
	if (q >= 3)
		printf("����\n");
	else if (q == 2)
		printf("����\n");
	else
		printf("˫��\n");

	return 0;
}

//2.��ӡ100-200֮�������
#include <stdio.h>
int judge(int x)
{
	int y = 0;
	int z = 0;
	int p = 0;
	for (y = 1; y <= x; y++)
	{
		z = x % y;
		if (z == 0)
		{
			p++;
		}
	}

	return p;
}

int main()
{
	int ret = 0;
	for (ret = 100; ret <= 200; ret++)
	{
		int jet = judge(ret);
		if (jet == 2)
			printf("%d\n", ret);

	}

	return 0;
}

//������
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		//�������ʹ�ӡ
		//��2~i-1֮������ȥ�Գ�i
		int flag = 1;//flag��1����ʾ������
		int j = 0;
		for (j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			printf("%d ", 1);
	}
	return 0;
}
//�������Ż������ú���������һ��С�ں����Ŀ��� ���Ż�
#include <math.h>
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		//�������ʹ�ӡ
		//��2~i-1֮������ȥ�Գ�i
		int flag = 1;//flag��1����ʾ������
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			printf("%d ", 1);
	}
	return 0;
}
//�����Ķ����Ż�������ż����ֻ��2�����������ֱ�Ӵ�����������
#include <math.h>
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 101; i <= 200; i+=2)
	{
		//�ж�i�Ƿ�Ϊ����
		//�������ʹ�ӡ
		//��2~i-1֮������ȥ�Գ�i
		int flag = 1;//flag��1����ʾ������
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			printf("%d ", 1);
	}
	return 0;
}

//������
#include <stdio.h>
#include <math.h>//������ͷ�ļ�
int prime(int a)
{
	int j = 0;

	for (j = 2; j <= sqrt(a); j++)
	{
		if (a % j == 0)
		{
			return 0;
		}
	}

	return 1;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i += 2)
	{
		if (prime(i))
		{
			printf("%d ", i);
			count++;
		}

	}
	printf("\n%d\n", count);

	return 0;
}

//3.��ӡһǧ����ǧ��֮�������(leap year)
//��ʾ���ж����������Ҫ��
//1.�ܱ�4���������Ҳ��ܱ�100������������
//2.�ܱ�400������������
//��һ��
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			printf("%d ", year);
			count++;
		}

	}
	printf("\n%d\n", count);
	return 0;
}
//������
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0)
		{
			if (year % 100 != 0)
			{
				printf("%d ", year);
				count++;
			}
		}
		if (year % 400 == 0)//ע��˴�����д�� else if ������1200��1600��2000�����������400���жϣ�
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\n%d\n", count);
	return 0;
}

//������
int judge(int a)
{

	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
	{
		return 1;
	}
	else
		return 0;
}

int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (judge(year))
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\n%d\n", count);
	return 0;
}

//���ģ�
void judge(int a)
{
	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
		printf("%d ", a);
}

int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		judge(year);
	}

	return 0;
}
//�뷨����ȣ��ú����÷�������һ����ֻ���ж����꣬��ú����޷�ʵ��
//�ܽ᣺�����Ĺ���һ��Ҫ������ԣ��㹻��һ���������������ھۣ����ܶ���������ϣ��Լ������˾���û��ϵ��

//4.дһ��������ʵ��һ��������������Ķ��ֲ���
//���飺�Ȱ����������ô����ã���ȥд�������
#include <stdio.h>
int binary_search(int arr[], int k, int sz)//ѧϰ�˴������Ա���Ϊ�����д����arr[]���β�arr����ȥ�����飬������ָ�����
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;//�˴�left,right,mid��ΪԪ���±꣬����д��ֹ���ݹ���Ӷ������������
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
			return mid;
	}
	if (left > right)
	{
		return -1;
	}

}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//������Ԫ��
	int sz = sizeof(arr) / sizeof(arr[0]);
	//binary_search(arr, k, sz);//�ú�����Ҫ���飬������Ԫ�أ�����Ԫ�ظ������ܽ�2���ܽ�3
	//�����ҳɹ����򷵻�Ԫ�ص��±�
	//��ʧ�ܣ��򷵻�-1��������0�Ƿ�ֹԪ�ر����±����0��
	int ret = binary_search(arr, k, sz);//ע�⺯���ķ���ֵҪ�洢���������ڴ�ӡ
	if (ret)
		printf("%d ", ret);
	if (ret == -1)
		printf("err\n");

	return 0;
}
//�ܽ᣺1.�βκ�ʵ�ε����ֿ�����ͬ��Ҳ���Բ�ͬ
//2.���鴫�ε�ʱ��ֱ��д������
//3.���鴫��ʱ��ʵ���ϴ��ݵ�����Ԫ�صĵ�ַ���Ǹ�ָ�����������˲�����binary_search�����ڲ���������Ԫ�ظ���������binary_search����Ҫ����sz����
//����sz�ļ���ŵ�binary_search�����ڲ����ú���ֻ������������������ֻ���׵�ַ���Ǹ�ָ��������Ĺ�ϵ��binary_search�ڲ���sz���㵱�е�sizeof(arr)������4��32λ����8��64λ��
//3*.���鴫��ʵ���ϴ��ݵ���������Ԫ�صĵ�ַ���������������飬�����ں����ڲ�����һ�������������ֵ������Ԫ�ظ����ǲ����׵�

//���䣺�������ͣ�
//C99�������˲�������(bool)������ʾ���
//bool��������ʾ��ٵı���     eg��bool flag = true/false;
//ʾ����
#include <stdio.h>
#include <math.h>
#include <stdbool.h>//��������ͷ�ļ�
bool prime(int a)
{
	int j = 0;

	for (j = 2; j <= sqrt(a); j++)
	{
		if (a % j == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i += 2)
	{
		if (prime(i))
		{
			printf("%d ", i);
			count++;
		}

	}
	printf("\n%d\n", count);

	return 0;
}

//5.дһ��������ÿ����һ������������ͻὫnum��ֵ����1
#include <stdio.h>
void ADD(int* p)
{
	(*p)++;//(*p)Ҫ������
}

int main()
{
	int num = 0;
	ADD(&num);//ÿ����һ�Σ�numֵ���ı䣬�ú���Ӧ�ô�ַ
	printf("%d\n", num);//1
	ADD(&num);
	printf("%d\n", num);//2

	return 0;
}
//������
#include <stdio.h>
int ADD(int p)
{
	return ++p;//����ʹ��ǰ��++������Ϊ���ʹ�ú���++���ᵼ�¡���ʹ�ã���++����ֱ�ӷ����ˣ�����ʹֵ���ӣ��˴�дreturn p + 1;һ��
}

int main()
{
	int num = 0;
	num = ADD(num);
	printf("%d\n", num);//1
	num = ADD(num);
	printf("%d\n", num);//2

	return 0;
}
//���飺��������������ʹ��ȫ�ֱ���


//������Ƕ�׵��ú���ʽ����
//1.��������Ƕ�׶���
//2.��ʽ���ʣ���һ�������ķ���ֵ��Ϊ���������Ĳ��������ģ�
//3.��ʽ���ʵ�ǰ���������������з���ֵ
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	//ÿһ��printf�������ص�������һ�δ�ӡ���ַ��ĸ���
	//���ڲ���printf�ȷ�������ӡ43������2���ٷ����м��pf���������ڲ���pf����2�������м��pf��ӡ2������1��������ⲿ��pf��������ӡ�м�pf�ķ���ֵ1
	//������ս��Ϊ 4321
	return 0;
}
//���飺������д����ֵ��ʱ��Ĭ�Ϸ�������Ϊint
//���飺д�˷������͵��ֲ����أ�ĳЩ������Ĭ�Ϸ��ظú����ڲ����һ��ָ��ִ�еĽ��
//���飺��д����ȷ˵��main��������Ҫ��������������main�������в�����
int main(void)
{
	return 0;
}
//main������3������
int main(int argc, char* argv[], char* envp[])
{
	return 0;
}


//�����������Ͷ���
#include <stdio.h>
//����������
int ADD(int x, int y);//Ҳ����ֱ��д�� int ADD(int,int);

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	int ret = ADD(a, b);

	printf("%d\n", ret);

	return 0;
}
//�����Ķ���
int ADD(int x, int y)
{
	return x + y;
}
//�ܽ᣺
//����������1.����������һ������ں�����ʹ��֮ǰ��Ҫ���� ��������ʹ�� 2.����������һ��Ҫ����ͷ�ļ��еģ���ģ��ֿ���
//ͷ�ļ��İ������ǽ�ͷ�ļ��е����ݿ�������

//(��Ҫ)���뾲̬��ķ����� #pragma comment(lib,"add.lib")
//ps:����ͨ����������ֶ��ƽ⾲̬��


//�����ݹ�:����ΪС�������ظ�����
//ʾ��һ������һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
#include <stdio.h>
void print(unsigned int n)
{
	if (n > 9)//���if����ǹؼ������û�У��������������ݹ飺ջ���
	{
		print(n / 10);
	}

	printf("%u ", n % 10);

}

int main()
{
	unsigned int a = 0;
	scanf("%u", &a);

	print(a);
	//print(1234)
	//print(123) 4
	//print(12) 3 4
	//print(1) 2 3 4

	return 0;
}
//�ݹ��������Ҫ������
//1.���������������������������������ʱ�򣬵ݹ�㲻�ټ���
//2.ÿ�εݹ����֮��Խ��Խ�ӽ������������

//ʾ������
//��д��������������ʱ���������ַ����ĳ���
//ǰ�ã�дstrlen����
#include <stdio.h>
int mystrlen(char str[])//�˴�д int mystrlen(char* str) һ�����ַ�����ֻ�ᴫ�ݵ�һ���ַ��ĵ�ַ
{
	int count = 0;
	while (*str != '\0')
	{
		str++;//����һ���ַ���ÿ���ַ�ֻռ1���ֽ�
		count++;//��������ʱ���� 
	}

	return count;
}

int main()
{
	char arr[] = "abcd";
	int ret = mystrlen(arr);
	printf("%d\n", ret);

	return 0;
}
//
#include <stdio.h>
int mystrlen(char* str)
{
	//msl(abc)
	//1+msl(bc)
	//1+1+msl(c)
	if (*str != '\0')//ע��Ҫ��*
	{
		return 1 + mystrlen(str + 1);//strǰ����char*����Ϊ���������my_strlen()�Ǻ����ĵ��ö��Ƕ���
		//����д�� 1+mystrlen(++str);
	}
	else
		return 0;


}

int main()
{
	char arr[] = "abc";
	int ret = mystrlen(arr);
	printf("%d\n", ret);

	return 0;
}
//������������������е���ʽ����


//�����ݹ������
//ѭ���ǵ�����һ��
//��ϰ����n�Ľ׳�
//�ݹ�ķ�ʽ
int fac(int a)
{
	while (a > 1)
	{
		a = a * fac(a - 1);
		return a;
	}
	if (a == 1)
	{
		return 1;
	}

}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fac(n);
	printf("%d\n", ret);

	return 0;
}
//�����ķ�ʽ
int fac(int a)
{
	int i = 0;
	int j = 1;
	for (i = 1; i <= a; i++)
	{
		j = j * i;//��д�� j *= i;
	}
	return j;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fac(n);
	printf("%d\n", ret);


	return 0;
}

//��ϰ�����n��쳲��������������������
//�ݹ�
int fib(unsigned int a)
{
	if (a >= 3)
	{
		return fib(a - 1) + fib(a - 2);
	}
	else if (a == 2 || a == 1)
	{
		return 1;
	}

}

int main()
{
	unsigned int n = 0;
	scanf("%u", &n);

	int ret = fib(n);

	printf("%d\n", ret);

	return 0;
}
//���õݹ�ķ����ظ������ر�࣬�����Ž�

//����
int fib(int a)
{
	int i = 0;
	int j = 1;
	int q = 1;
	int z = 0;
	for (i = 3; i <= a; i++)//ע��i��3��ʼ�������һ��ʼ��������
	{
		z = j + q;
		j = q;
		q = z;

	}
	return z;

}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);

	return 0;
}
//���ߣ�
int fib(int a)
{

	int j = 1;
	int q = 1;
	int z = 1;//���n=1���������ѭ����ֱ�ӷ���z������zҪ��ֵΪ1
	while (a >= 3)
	{
		z = j + q;
		j = q;
		q = z;

		a--;
	}

	return z;

}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);

	return 0;
}
//�ܽ᣺���õݹ鳢�ԣ���д������û������ȱ�ݣ����ʵ��¡�ջ����ȣ������õݹ飻�����õ�����
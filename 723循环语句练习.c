#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//һ.����n�Ľ׳�(���������)
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 1;
	int x = 1;
	while (i <= n)
	{
		x = x * i;

		i++;
	}
	printf("%d\n", x);
	return 0;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 1;
	int x = 1;
	for (i = 1; i <= n; i++)
		x = x * i;

	printf("%d\n", x);

	return 0;
}

//��.�׳����
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 1;
	int ret = 1;
	int sum = 0;
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
		sum = sum + ret;

	}
	printf("%d", sum);


	return 0;
}

int main()
{
	int n = 1;
	int x = 0;
	scanf("%d", &x);
	int i = 1;
	int t = 1;
	int sum = 0;
	for (n = 1; n <= x; n++)
	{
		t = 1;//�ؼ�������׳˲���1��ʼ�۳�
		for (i = 1; i <= n; i++)
		{
			t = t * i;
		}
		sum = sum + t;
	}

	printf("%d\n", sum);



	return 0;
}

//��.���������������
//����������
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int k = 7;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (arr[i] == k)
		{
			printf("%d", i);
		}


	}
	if (i == sz)
		printf("err");

	return 0;
}
//���ַ����ң�����������
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);

	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{


		int mid = (left + right) / 2;//�����ݹ���ʱ�����ܵ����������
		//int mid = left + (right - left) / 2;    //��Ϊ�Ż�д��
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("%d\n", mid);
			break;
		}

	}
	if (left > right)
	{
		printf("err");
	}

	return 0;
}

//��.��д���룬��ʾ����ַ��������ƶ������м���
//ע�⣺�����ַ����������һ���ַ�����ŵ���д��
int main()
{
	//��'c'���±�
	char buf[] = { "abc" };//{a b c \0}
	int left = strlen(buf) - 1;//strlen(buf)�������е��ַ�����������\0ʱֹͣ����strlen(buf)Ϊ3�����ַ�'c'�����Ϊ2�����Լ�ȥ1
	int right = sizeof(buf) / sizeof(buf[0]) - 2;//sizeof(buf) / sizeof(buf[0])����������е�Ԫ�ظ�������\0Ҳ�������ڣ�������Ϊ4��Ӧ��ȥ2


	return 0;
}

int main()
{
	char arr1[] = { "##############" };
	char arr2[] = { "welcome to bit" };

	int left = 0;
	int right = strlen(arr1) - 1;

	while (left < strlen(arr1) - 1)  //�ж���������д left<=right || ���Լ���д���������ַ�����һ�º��������У����������ַ�����һ�£����Բ��ϵص����Խ��û��Ӱ��
	{
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];

		left++;
		right--;

		printf("%s\n", arr1);
	}

	return 0;
}//�˴������еĽ��Ϊ�ַ�һ�¾ͳ�����

//ʹ��Sleep�����ﵽ����Ч����
#include <stdio.h>
#include <windows.h>
int main()
{
	char arr1[] = { "##############" };
	char arr2[] = { "welcome to bit" };

	int left = 0;
	int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		printf("%s\n", arr1);

		Sleep(1000);//�ӻ�1000����

		left++;
		right--;
	}

	return 0;
}//������ͬһ��ʵ��

//��Ʒ
#include <stdio.h>
#include <windows.h>//Sleepͷ�ļ�
#include <stdlib.h>//systemͷ�ļ�
int main()
{
	char arr1[] = { "##############" };
	char arr2[] = { "welcome to bit" };

	int left = 0;
	int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		printf("%s\n", arr1);

		Sleep(1000);//�ӻ�1000����

		//�����Ļ
		system("cls");//system��һ���⺯��������ִ��ϵͳ���clean screen

		left++;
		right--;
	}
	printf("%s\n", arr1);//����ӡһ�Σ���ֹȫ������
	return 0;
}

//����
int main()
{
	char arr1[] = { "##############" };
	char arr2[] = { "welcome to bit" };

	int left = 0;
	int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		printf("%s\r", arr1);// \r����س���������ǰ�е���λ��

		Sleep(1000);//�ӻ�1000���� VS���������Բ�����ͷ�ļ��Ϳ���ʹ��


		left++;
		right--;
	}
	printf("%s", arr1);
	return 0;
}


//��.ģ���û���¼�龰������ֻ�ܵ�½���Ρ���ֻ���������������룬���������ȷ����ʾ��½��ɣ�������ξ�����������˳�����
//�ؼ����Ƚ�2���ַ����Ƿ���ȣ�������==����Ӧ��ʹ��һ���⺯����strcmp   (string compare)
//�������ֵ��0����ʾ2���ַ������
#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	char password[] = { 0 };
	char correct[] = { "abcde" };


	for (i = 0; i < 3; i++)
	{
		printf("����������:");
		scanf("%s", password);//�������һ����ַ�����Դ˴�����&

		if (strcmp(password, correct) == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�����������\n");
		}
	}
	if (i == 3)
	{
		printf("�����������������˳�����\n");
	}

	return 0;
}
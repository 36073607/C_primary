#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1.дһ���������������ַ����е��ַ��������У����������ӡ
//��һ
#include <string.h>
int main()
{
	char arr[] = "abcdef";
	int num = strlen(arr) - 1;
	int left = 0;
	int right = num;
	while (left < right)
	{
		char i = arr[left];
		arr[left] = arr[right];
		arr[right] = i;
		
		left++;
		right--;

	}
	printf("%s", arr);

	return 0;
}
//����
void reverse(char* arr, int left, int right)
{

	for (; left < right; left++, right--)
	{
		char i = arr[left];
		arr[left] = arr[right];
		arr[right] = i;

	}

}
int main()
{
	char arr[] = "abcdefg";
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 2;
	reverse(arr, left, right);

	printf("%s", arr);


	return 0;
}

#include <string.h>
void reverse(char arr[])//string����һֱ��ȡ����0�����Կ����ں����ڲ�ʹ��
{
	int left = 0;
	int right = strlen(arr) - 1;
	while (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;

		left--;
		right++;

	}

}
int main()
{
	char arr[] = "abcdefg";
	reverse(arr);
	printf("%s", arr);

	return 0;
}
//���� �ݹ飬��Ȼ�ô�ַ����
void reverse(char* str)//�漰ʵ�ε�λ�øı䣬����1��ַ
{
	//a bcdef g     �Ƚ�a���������ٰ�g����a����g����\0�γ�"bcdef"�����飬���ݹ飩����\0����a

	char tmp = *str;//1

	int stl = strlen(str) - 1;
	*str = *(str + stl);//2

	*(str + stl) = '\0';//3

	if (strlen(str + 1) >= 2)//ע���str+1��ʼ�ǣ���һ���Ѿ������������Դ���һ�ּǣ�Խ��Խ�������м�
	{
		reverse(str + 1);//�ݹ�
	}


	*(str + stl) = tmp;//4

}
int main()
{
	char arr[] = "abcdefg";
	reverse(arr);
	printf("%s", arr);


	return 0;
}
//����
void reverse(char* str, int left, int right)
{
	char tmp = str[left];
	str[left] = str[right];
	str[right] = tmp;

	if (left <= right)
		reverse(str, ++left, --right);//ע��Ҫǰ��++/--

}

int main()
{
	char arr[] = "abcdefg";
	int left = 0;
	int right = strlen(arr) - 1;

	reverse(arr, left, right);

	printf("%s\n", arr);


	return 0;
}
//ע����������һ��Ҫ�ǵü�[] ������

//2.����һ������ÿλ֮��
int re_sum(int input)
{
	//resum(1234)
	//4+resum(123)
	//4+3+resum(12)
	//4+3+2+resum(1)
	if (input > 9)
		return re_sum(input / 10) + input % 10;
	else
		return input;
}
int main()
{
	int input = 0;
	scanf("%d", &input);

	int ret = re_sum(input);
	printf("%d\n", ret);

	return 0;
}

//3.ʵ��n��k�η�
double cf(int n, int k)
{
	if (k > 0)
	{
		return n * cf(n, k - 1);
	}
	else if (k < 0)
	{
		return 1.0 / cf(n, -k);
	}
	else
		return 1;
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);

	double ret = cf(n, k);
	printf("%lf\n", ret);

	return 0;
}
//�⺯���� double pow(double x,double y);  <math.h>
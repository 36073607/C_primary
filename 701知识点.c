#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char arr1[] = { "abcdrfg" };
	char arr2[] = {'x','y','z','\0','q'};
	char otto = 't';
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", "are you");
	printf("%c\n", otto);
	printf("%d\n", strlen("c:\test\628\test.c"));//14���ַ�����������\t��\62��ֻ��һ���ַ����˽���ֻ��0-7����8û���\ddd�˽���ת���ַ���\t���ַ�����ֻ��һ���ַ���������Ч���൱��4���ַ���
	printf("c:\test\628\test.c");
	
	printf("//")
	char arr3[] = { 'b','i','t' };
	printf("%d\n", strlen(arr3));  //���ֵ
	char arr4[3] = { 'b','i','t' };
	printf("%d\n", strlen(arr4));  //���ֵ
	char arr5[4] = { 'b','i','t' };
	printf("%d\n", strlen(arr5));  //3������ȫ��ʼ����ʣ��ĵĲ���Ĭ�ϳ�ʼ��Ϊ0
	
	//C99��׼֮ǰ������Ĵ�С�����ó������߳������ʽ��ָ��
	//int arr[10]={0};
	//int arr[4+6]={1,2,3,4};

	//C99��׼֮��֧���˱䳤���飬���ʱ����������Ĵ�СΪ������������ָ����ʽ�������ǲ��ܳ�ʼ���ġ�
	/*
	   int m = 100;
	   int arr4[m];  ��ȷ           int arr4[m]={1,2};����
	*/;



	return 0;
}


//%d��ӡ����
//%s��ӡ�ַ���
//%c��ӡ�ַ�
//%f��ӡfloat���͵�����
//%lf��ӡdouble���͵�����
//%p���Ե�ַ�ĸ�ʽ��ӡ���ݣ�eg:printf("%p\n",&a}; �洢��int* p = &a;   ��p����ָ�����

/*
ת���ַ���
\n�س�����
\tˮƽ�Ʊ������������           
\0�����ַ���
\a����
\r�س�
\ddd�˽�����������ַ�
\xddʮ��������������ַ�

0��\0��ASC��ֵ��Ϊ0

*/



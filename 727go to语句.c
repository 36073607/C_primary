#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//ʵ����û��goto���Ҳ���Ժ�����д������
//����ĳЩ������goto��仹���õ��ŵģ����磺��ֹ������ĳЩ���Ƕ�׵Ľṹ�Ĵ������
//eg:һ������������߶��ѭ��
//���ѭ���������ʹ��break�Ǵﲻ��Ŀ�ĵģ���ֻ�ܴ����ڲ�ѭ���˳�����һ��ѭ��

//��ѭ��
int main ()
{
again:
	printf("hh");
	goto again;

	return 0;
}
//goto��䲻�ܿ纯��ʹ��

//goto��������ʺϵĳ������£�
int main()
{
	for (...)
		for (...)
		{
			for (...)
			{
				if (disaster)
					goto error;
			}

		}
error:
	if(disaster)
		//����������

	return 0;
}

#include <stdio.h>
#include <windows.h>
#include <string.h>//strcmpͷ�ļ�
int main()
{
	char ret[20] = { 0 };//���飺�������ʼ��ʱ[]�������������
	system("shutdown -s -t 60");
again:

	printf("input hyb or your computer will close\n");
	scanf("%s", ret);

	if (strcmp(ret, "hyb") == 0)
	{
		system("shutdown -a");
	}
	else
		goto again;

	return 0;
}

#include <stdio.h>
#include <windows.h>
#include <string.h>//strcmpͷ�ļ�
int main()
{
	char ret[20] = { 0 };
	char jet[20] = { "����Ҳ����go��" };
	system("shutdown -s -t 60");
again:

	printf("input %s or your computer will close\n", jet);
	scanf("%s", ret);

	if (strcmp(ret, jet) == 0)
	{
		system("shutdown -a");
	}
	else
		goto again;

	return 0;
}
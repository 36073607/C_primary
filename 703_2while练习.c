#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int practice = 0;
	while (practice <= 20)
	{
		printf("practice=%d\n",practice);
		practice++;
	}
	if (practice > 20)
	{
		printf("well\n");
	}
	else
	{
		printf("continue\n");
		practice++;
	}


	return 0;
}
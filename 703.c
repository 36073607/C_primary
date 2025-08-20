#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("你相信命运吗(0/1)?");
	int input = 0 ;
	scanf("%d\n", &input);
	if (input == 1)
	{

		printf("无用\n");
	}

	else 
	{  
		printf("无用且无谋\n");
	
	}

	return 0;
}
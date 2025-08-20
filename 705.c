#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main ()
{
	/*int arr[9] = { 1,2,3,4,5,6,7,8,9 }; 这一行arr[]中的数是指存储的样本量
	printf("%d\n", arr[0]);  这一行arr[]中的数是按具体样本的下标表示的，0-8                                     */

	int arr[10] = { 11,12,13,14,15,16,17,18,19,20 };
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i = i + 1;

	}





	return 0;
}
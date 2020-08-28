#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num, maxPrime, Prime;
	printf("(Please Enter number more than 1)\n");
	printf("Enter number to find the largest prime number factor : ");
	scanf("%d", &num);
	Prime = 3;
	maxPrime = 0;
	while (num % 2 == 0)
	{
		maxPrime = 2;
		num /= 2;
	}
	while (num != 1)
	{
		while (num % Prime == 0)
		{
			maxPrime = Prime;
			num /= Prime;
		}
		Prime += 2;
	}
	printf("The largest Prime number factor is %d", maxPrime);
	
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, a, flag = 0, prime = 0, input;
	printf("Enter number : ");
	scanf("%d", &input);
	for (i = 2;i < input / 2;i++) {
		if (input % i == 0) {
			for (a = 2;a <= i / 2;a++) {
				if (i % a == 0) {
					flag = 1;
					break;
				}

			}
			if (flag == 0) {
				prime = i;
			}
		}
	}
	printf("The largest Prime number factor is %d", prime);
	return 0;
}
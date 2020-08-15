#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, a, flag = 0, prime = 0;
	for (i = 2;i < 13195 / 2;i++) {
		if (13195 % i == 0) {
			for (a = 2;a <= i / 2;a++) {
				if (i % a == 0) {
					flag = 1;
					break;
				}
				if (flag == 0) {
					prime = i;
				}
			}
		}
	}
	printf("\nPrime = %d", prime);
	return 0;
}
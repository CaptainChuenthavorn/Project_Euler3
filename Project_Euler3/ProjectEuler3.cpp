#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
long long int input, i, a, flag = 0, prime = 0;

int main()
{
	//long long int  n;
	for (i = 2;i < 600851475143;i++) {
		if (600851475143 % i == 0) {
			for (a = 2;a <= i / 2;a++) {
				if (i % a == 0 || i == 35) {
					flag = 1;
					break;
				}
				if (flag == 0) {
					prime = i;
				}
			}
		}
	}
	printf("\nPrime = %lld", prime);
	return 0;
}
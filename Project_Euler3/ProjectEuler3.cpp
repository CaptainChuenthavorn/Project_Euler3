#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, a, flag = 0, prime = 0, input;
	printf("Enter number : ");
	scanf("%d",&input);
	for (i = 2;i < input / 2;i++) {
		if (input% i == 0) {
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
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int input,i, a, flag = 0, prime = 0;
int checkPrime(int N,int i);
int main()
{
	int  k, n,keep;
	for (i = 2;i < 600851475143;i++) {
		if (600851475143 % i == 0) {
			for (a = 2;a <= i/2 ;a++) {
				if (i % a == 0 || i ==35) {
					flag = 1;
					break;
				}
				//checkPrime(flag, i);
				if (flag == 0) {
					prime = i;
				}
			}
			/*for (k = 2;k < keep;k++) {
				if (keep % k != 0 )
				{f
					prime = keep;
				}
			}*/
			/*if (flag == 0) {
				prime = i;
				printf("\nPrime i : %d", prime);
			}
			else {
				printf("NotPrime : %d", i);
			}*/
		/*}
	}
	printf("\nPrime = %d", prime);
	return 0;
}
int checkPrime(int N, int i) {
	if (N == 0) {
		prime = i;
	}
	/*for (a = 2;a < (N / 2);a++) {
		if (N % a == 0)
			flag = 1;
		break;
	}*/
	/*return prime;
}*/

//int checkPrime(int input);
/*int checkprimeCon() {

	scanf("%d", &input);
	checkPrime(input);
	if (flag == 0)	printf("Prime");
	else if (flag == 1)	printf("Not Prime");
	return 0;
}*/
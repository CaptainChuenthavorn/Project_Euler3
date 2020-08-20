#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, a, flag = 0, prime = 0, input;
	printf("Enter number to find the largest prime number factor : ");
	scanf("%d", &input);
	for (i = 2;i < input / 2;i++) {
		if (input % i == 0 && input >=0) {
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
	
	if (input >= 0) printf("The largest Prime number factor is %d", prime);
	else printf("your number is less than 0 \n Plese enter number >= 0");
	return 0;
}
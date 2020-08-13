#include<stdio.h>
int main()
{

	int i, k, n,prime,keep;
	for (i = 2;i < 13195;i++) {
		if (13195 % i == 0) {
			keep = i;
				for (k = 2;k < keep;k++) {
					if (keep % k != 0 )
					{
						prime = keep;
					}
				}
		}

	}
	printf("%d",prime);
	return 0;
}
#include<stdio.h>
int main(void)
{
	int i, j, k;
    scanf("%d",&k);
	for (i = 1; i <= k; i++)
	{
		for (j = k; j >=i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main(void)
{
	int i, j, k, z;
    scanf("%d",&z);
	for (i = 1; i <= z; i++)
	{
        for(k=0;k<z-i;k++)
        {
            printf(" ");
        }
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
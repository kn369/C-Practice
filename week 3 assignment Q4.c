/* diamond */

#include<stdio.h>

int main()
{
	int row,i,j,k;
	scanf("%d",&row);
	
	for (i=1; i<=row; i++)
	{
		for (j=1; j<=(row-i); j++)
			printf(" ");
		for (k = 1; k<=(i*2 - 1);k++)
			printf("*");
		printf("\n");
	}
	for (i=(row - 1); i>0; i--)
	{
		for (j=0; j<= ((row - 1)-i);j++)
			printf(" ");
		for (k=1; k<=(i*2 -1); k++)
			printf("*");
		printf("\n");
	}
}

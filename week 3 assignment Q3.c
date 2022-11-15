/* equilateral triangle pattern */

#include<stdio.h>

void main()
{
	int row,i,k,l;
	scanf("%d",&row);
	
	for (i=1;i<=row;i++)
	{
		for (k=1;k<=(row-i);k++)
			printf(" ");
		for (l=1;l<=(i*2 - 1);l++)
			printf("*");
		printf("\n");
	}
}

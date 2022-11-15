/* Hollow equilateral triangle */

#include<stdio.h>

int main()
{
	int row,i,k,l;
	printf("Enter the number of rows\n");
	scanf("%d",&row);
	
	for (i=1;i<=row;i++)
	{
		if(i<row)
		{
			for (k=1;k<=(row - i);k++)
				printf(" ");
			printf("*");
			if(i>=2)
			{
				for (k=1;k<(i*2-2);k++)
					printf(" ");
				printf("*");
			}
			printf("\n");
		}
		else
		{
			for (k=1;k<=(row*2-1);k++)
				printf("*");
		}
	}
}

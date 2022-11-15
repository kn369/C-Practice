/* Check whether the given number is Armstrong number or not */

#include<stdio.h>
#include<math.h>

void main()
{
	int rem,sum,num;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	rem = num;
	sum = 0;
	while(num>0)
	{
		sum = sum + pow((num%10),3);
		num = num/10;
	}
	if (sum == rem)
		printf("Entered number is an Armstrong number");
	else
		printf("Entered number isn't an Armstrong number");
}

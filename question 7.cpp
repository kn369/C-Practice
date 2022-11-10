/* Simple calculator*/

#include<stdio.h>

int main()
{
	float num_1,num_2,result;
	char opr;
	
	printf("This is a simple calculator \n");
	printf("Enter two numbers seperated by operator (all three in different lines) \n");
	scanf("%f%s%f",&num_1,&opr,&num_2);							/*Gets input from user*/
	
	if(opr == '+')
	{
		result = num_1 + num_2;
		printf("= %f",result);
	}
	else if(opr == '-')
	{
		result = num_1 - num_2;
		printf("= %f",result);
	}
	else if(opr == '*')
	{
		result = num_1*num_2;
		printf("= %f",result);
	}
	else
	{
		result = num_1/num_2;
		printf("= %f",result);
	}
	return 0;
}

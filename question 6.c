/*This program finds the roots of quadratic equation*/

#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c,D,root_1,root_2;
	printf("Enter the coefficent of x^2: \n");
	scanf("%f",&a);
	printf("Enter the coefficent of x: \n");
	scanf("%f",&b);
	printf("Enter the constant term: \n");
	scanf("%f",&c);
	
	D = pow(b,2)-(4*a*c);					/*calculating discriminant*/
	if (D < 0)
	{
		printf("Roots are imaginary: ");
		printf(" D = %f",D);
	}
	if (D == 0)
	{
		printf("There is only one root: ");
		root_1 = (-1*b + sqrt(D))/(2*a);
		printf("%f",root_2);
	}
	else
	{
		root_1 = (-1*b + sqrt(D))/(2*a);
		root_2 = (-1*b - sqrt(D))/(2*a);
		printf("Two roots are %f",root_1);
		printf(" and %f",root_2);
	}
}

/*Area of triangle*/

#include<stdio.h>

int main()
{
	float base,height,area;
	printf("Enter the base of the triangle: \n");
	scanf("%f",&base);
	printf("Enter the height of the triangle: \n");
	scanf("%f",&height);
	area = 0.5*base*height;
	printf("%f The area of the triangle is ",area);
	return 0;
}

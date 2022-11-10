/* Swap two values using a temporary variable*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("%d\n",a);
	printf("%d\n",b);
	return 0;
}

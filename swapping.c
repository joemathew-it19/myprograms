#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("enter the two values");
	scanf("%d %d ",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf(" values after interchanging");
	printf("a=%d,b=%d",a,b);
}

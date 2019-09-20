#include<stdio.h>
void main()
{
int a,b,c,d;
printf("enter 4 values");
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a<b&&a<c&&a<d)
{
	printf("a is smallest");
}
else if(b<c&&b<d)
{
printf("b is smallest");
}
else if(c<d)
{
printf(" c is smallest");
}
else
{
printf("d is smallest");
}
} 

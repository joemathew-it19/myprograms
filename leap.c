#include<stdio.h>
void main()
{
	int y;
	printf("enter the year");
	scanf("%d",&y);
	if(y%4==0)
	{
		printf("leap year");
	}
	else if(y%400==0)
{

	printf(" leap year");
}
else
{
printf("not a leap year");
}
}


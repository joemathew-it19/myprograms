#include<stdio.h>
void main()
{
int a,b,c,ans;
printf("enter the three angle");
scanf("%d %d %d",&a,&b,&c);
ans=a+b+c;
if(ans==180)
{
 printf("this is triangle");
}
else if (a==0&&b==0&&c==0)
{
printf ("it is  not a triangle");
}
else
{
printf("it is not a  triangle");
}
}

}

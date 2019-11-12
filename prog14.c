#include<stdio.h>
 
void main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x>y&&x>z)
    {
        printf("%d x is greatest",x);
    }
    if(y>z)
    {
        printf("%d y is greatest",y);
    }
    else
    {
        printf("%d z is greatest",z);
    }
}

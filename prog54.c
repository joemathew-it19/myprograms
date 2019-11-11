x#include<stdio.h>
void main()
{
    float units;
    printf("enter total units consumed=");
    scanf("%f",&units);
    if(units>0&&units<=50)
    {
        printf("electricity bill=%f",units*0.50+units*20/100);
    }
    else if(units>51&&units<=150)
    {
         printf("electricity bill=%f",units*0.75+units*20/100);
    }
    else if(units>151&&units<=250)
    {
         printf("electricity bill=%f",units*1.20+units*20/100);
    }
     else if(units<250)
    {
         printf("electricity bill=%f",units*1.50+units*20/100);
    }
}

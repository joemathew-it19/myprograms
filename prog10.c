#include<stdio.h>
void main()
{
    int a[10],i,j;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("contant :\n\n");
    for(j=0;j<10;j++)
    {
        printf("address of this integer %d = %d\n",a[i],a[j]);
    }
}

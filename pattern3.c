#include<stdio.h>
int main()
{
    int n,a[100],i, j;
    printf("enter the limit");
    scanf("%d",&n);
    printf("enter the values:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
    
}

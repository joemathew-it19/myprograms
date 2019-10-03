#include <stdio.h>
void main() {
    int i,a[10]={};
    printf("enter 5 no:");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
        printf("%d \t ",a[i]);
    }
}

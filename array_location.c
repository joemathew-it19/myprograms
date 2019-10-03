#include <stdio.h>
void main() {
    int i,l,a[20];
    printf("enter 5 values");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the location");
    scanf("%d",&l);
    printf("%d",a[l-1]);
}

#include <stdio.h>
void main() {
    int i,n,a[10];
    printf("how many terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        printf("%d \t ",a[i]);
    }
}

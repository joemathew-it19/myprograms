#include <stdio.h>
void main() {
   int i,n,sum=0,a[50];
   printf("enter 5 values");
   for(i=0;i<5;i++)
   {
       scanf("%d",&a[i]);
       sum+=a[i];
   }
    printf("%d ",sum);
}

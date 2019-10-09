#include <stdio.h>
void main() {
    int n,i,a[15],min,max;
    min=a[0],max=a[0];
    printf("how many terms:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("%d the minimum ",min);
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
       
    }
     printf("%d maximum ",max);
 
 
}

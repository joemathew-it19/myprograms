#include <stdio.h>
void main() {
    int i,j,n,a[50],temp;
    printf("how many terms do you want");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                
                
            }
         }
    }
    
    printf("the ascending order");
    for(i=0;i<n;i++)
    {
        printf(" %d\n",a[i]);
        
    }
    printf("the descending order");
    for(i=n-1;i>=0;i--)
    {
      printf(" %d\n",a[i]);
    }
    
}

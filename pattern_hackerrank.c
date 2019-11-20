#include <stdio.h>

int main()
{
   int a = 0;
   scanf("%d",&a);
   int i=a,m=a,l=a;
   
   for(i;i>0;i--)
   {
       for(int j=0;j<a;j++)
       {
           printf("*");
       }
       printf("\n");
       a=a-2;
       for(int k =l-1;k<m;k++)
       {
           printf(" ");
       }
       l=l-1;
   }
   return 0;
}

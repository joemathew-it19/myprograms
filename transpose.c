#include<stdio.h>  
 void main()
 {
     int i,j,a[3][3];
     for(i=0;i<=2;i++)
     {
         for(j=0;j<=2;j++)
         {
             scanf("%d",&a[i][j]);
         }
         printf("\n");
     }
      for(i=0;i<=2;i++)
     {
         for(j=0;j<=2;j++)
         {
             printf("%d",a[j][i]);
         }
         printf("\n");
     }
 }

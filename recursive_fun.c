#include <stdio.h>

int main()
{
  int n=5;
  int fact(int);
 int f=fact(n);
 printf("%d",f);
return 0;
}
int fact (int a)
{
   int f1=1;
   if(a>0)
   {
     f1=a*fact(a-1);
     return f1;
    }
     else
     {
         return f1;
     }
   
}

#include <stdio.h>

int main()
{
      int a,b;
      void swap(int*,int*);
      a = 10;
      b = 15;
      printf("a=%d",a);
      printf("b=%d",b);
      swap(&a,&b);
      printf("a=%d",a);
      printf("b=%d",b);

    return 0;
}
void  swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    
}

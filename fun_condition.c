#include <stdio.h>

int main()
{
   int no,number;
   scanf("%d",&no);
    number_compare(no);
  // printf("%d",number);
   return 0;
}
int number_compare(int number)
{
   if(number%3==0&&number%5==0)
   printf("fizzbuzz");
   else if(number%5==0)
   printf("buzz");
   else if(number%3==0)
   printf("fizz");
   else
   printf("%d",number);
   
}

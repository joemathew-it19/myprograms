#include <stdio.h>
 
int main()
{
  int n, i,  j, a = 1;
 
  printf("Enter the number of rows of Floyd's triangle to print\n");
  scanf("%d", &n);
 
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; c++)
    {
      printf("%d ",a);
      a++;
    }
    printf("\n");
  }
 
  return 0;
}

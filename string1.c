#include <stdio.h>

int main()
{
    char a[10],i;
    printf("enter the string:");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
      printf("%c\n",a[i]);
    }
    
    return 0;
}

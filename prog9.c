
#include<stdio.h>
#include<string.h>
void main()
{
    int i,len;
    char a[100];
    gets(a);
    len=strlen(a);
    for(i=0;i!=len;i++)
    {
        printf("address of character %c = %d \n",a[i],a[i]);
    }
    puts(a);
}

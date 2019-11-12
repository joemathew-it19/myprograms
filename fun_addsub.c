#include<stdio.h>
 
void main()
{
    int x,y,add,sub,change(int*,int*,int*,int*);
    printf("enter the values of x and y");
    scanf("%d %d",&x,&y);
    change(&x,&y,&add,&sub);
    printf("%d",add);
    printf("%d",sub);
}
change(int *a,int *b,int *c,int *d)
{
    *c=*a+*b;
    *d=*a-*b;
}

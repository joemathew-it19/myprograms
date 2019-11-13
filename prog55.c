#include <stdio.h>
void  main()
{
    int mark;
    scanf("%d",&mark);
if(mark>=95)
    printf("your grade is O");
else if(mark>90 && mark<95)
    printf("your grade is a");
else if(mark>80 && mark<=90)
    printf("your grade is b");
else if(mark>70 && mark<=80)
    printf("your grade is c");
else if(mark>60 && mark<=70)
    printf("your grade is d");
else if(mark>=50 && mark<=60)
    printf("your grade is e");
else
    printf("your are fail");
}

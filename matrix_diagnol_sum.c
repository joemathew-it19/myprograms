#include <stdio.h>
void main()
{
    int i,j,a[3][3],sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum+=a[i][j];
            }
        }
    }
    printf("%d",sum);
}

#include<stdio.h>
 
void main()
{
    float length,breadth;
    float area;
 
    printf(" Enter the Length of a Rectangle : ");
    scanf("%f",&length);
 
    printf("\n Enter the Breadth of a Rectangle : ");
    scanf("%f",&breadth);
 
    area = length * breadth;
 
    printf("\n Area of Rectangle is : %f",area);
}

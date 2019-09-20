#include<stdio.h>
void main() {
    int operand1,operand2;
    int option;
    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("Enter the values of operand1 & operand2: ");
    scanf("%d %d",&operand1,&operand2);
    printf("Enter your Choice : ");
    scanf("%d",&option);
    switch(option)
    {
    case 1 :
        printf("Sum is : %d",operand1+operand2);
        break;
    case 2 :
        printf("Difference is : %d",operand1-operand2);
        break;
    case 3 :
        printf("Multiplication is : %d",operand1*operand2);
        break;
    case 4 :
        printf("Division is %d",operand1/operand2);
        break;
    default :
        printf(" Enter Your Correct Choice.");
        break;
    }
}

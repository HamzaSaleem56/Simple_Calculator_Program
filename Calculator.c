#include <stdio.h>
long add (int num1, int num2);
long sub (int num1, int num2);
long prod (int num1, int num2);
double div (int num1, int num2);
long modulus (int num1, int num2);


int main()
{
    long num1, num2;
    char opr;
    printf("------------------------------------------------------------------------------------------------------------------\n");
    printf("-----------------------------------------------------CALCULATOR---------------------------------------------------\n");
    printf("------------------------------------------------------------------------------------------------------------------\n");
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    printf("Choose the operation you would like to perform (+, -, *, /, %%): ");
    scanf(" %c",&opr);
    switch (opr)
    {
    case '+':
        printf("The addition of %ld and %ld is %ld",num1,num2,add(num1,num2));    
        break;
    case '-':    
        printf("The subtraction of %ld and %ld is %ld",num1,num2,sub(num1,num2));    
        break;
    case '*':
        printf("The product of %ld and %ld is %ld",num1,num2,prod(num1,num2));    
        break;
    case '/':
        printf("The division of %ld and %ld is %0.2lf",num1,num2,div(num1,num2));    
        break;    
    case '%':
        printf("The modulus of %ld and %ld is %ld",num1,num2,modulus(num1,num2));    
        break;        
    default:
        printf("Invalid operator");
        return 0;
        break;
    }
    printf("\nThank You!\n");
}

long add (int num1, int num2)
{
    return num1 + num2;
}

long sub (int num1, int num2)
{
    return num1 - num2;
}

long prod (int num1, int num2)
{
    return num1 * num2;
}

double div (int num1, int num2)
{
    return num1 / num2;
}

long modulus (int num1, int num2)
{
    return num1 % num2;
}
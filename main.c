#include <stdio.h>
#include<math.h>

int main()
{
    double num1, num2;
    char op;
    printf("Enter 1st number: ");
    scanf("%lf", &num1);

    printf("Select operator (+, -, *, /): ");
    scanf(" %c",&op);

    printf("Enter 2nd number: ");
    scanf("%lf", &num2);

    switch(op)
    {
        case '+':
            printf("Result = %.2lf",num1+num2);
            break;

        case '-':
            printf("Result = %.2lf",num1-num2);
            break;

        case '*':
            printf("Result = %.2lf",num1*num2);
            break;

        case '/':
            if(num2 != 0)
                printf("Result = %.2lf",num1/num2);
            else
                printf("Cannot divide by zero!\n");
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
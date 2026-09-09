#include <stdio.h>

int main()
{
    double num1, num2;
    char op;

    printf("Enter 1st number: ");
    if (scanf("%lf", &num1) != 1)
    {
        printf("Invalid input! Please enter a valid number.\n");
        return 1;
    }

    printf("Select operator (+, -, *, /): ");
    if (scanf(" %c", &op) != 1)
    {
        printf("Invalid input! Please enter a valid operator.\n");
        return 1;
    }

    printf("Enter 2nd number: ");
    if (scanf("%lf", &num2) != 1)
    {
        printf("Invalid input! Please enter a valid number.\n");
        return 1;
    }

    switch(op)
    {
        case '+':
            printf("Result = %.2lf\n", num1+num2);
            break;

        case '-':
            printf("Result = %.2lf\n", num1-num2);
            break;

        case '*':
            printf("Result = %.2lf\n", num1*num2);
            break;

        case '/':
            if(num2 != 0)
                printf("Result = %.2lf\n", num1/num2);
            else
                printf("Cannot divide by zero!\n");
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
#include <stdio.h>

// menu calculator(updated code)

void displayMenu(void);
void clearInputBuffer(void);
int readChoice(char *choice);
int readNumber(const char *prompt, double *value);
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
int divide(double a, double b, double *result);

int main()
{
    double num1, num2, result;
    char choice, again;

    do
    {
        displayMenu();

        if (!readChoice(&choice))
        {
            printf("Invalid input! Please enter a single character.\n");
            continue;
        }

        if (choice == '5')
        {
            printf("Exiting from calculator...\n");
            break;
        }

        if (choice < '1' || choice > '4')
        {
            printf("Invalid choice!\n");
            printf("\nDo you want to calculate again? (y/n): ");
            if (!readChoice(&again))
                break;
            continue;
        }

        if (!readNumber("Enter number 1: ", &num1) ||
            !readNumber("Enter number 2: ", &num2))
        {
            printf("Invalid number entered! Please try again.\n");
            continue;
        }

        switch (choice)
        {
            case '1':
                printf("Addition = %.2lf\n", add(num1, num2));
                break;

            case '2':
                printf("Subtraction = %.2lf\n", subtract(num1, num2));
                break;

            case '3':
                printf("Multiplication = %.2lf\n", multiply(num1, num2));
                break;

            case '4':
                if (divide(num1, num2, &result))
                    printf("Division = %.2lf\n", result);
                else
                    printf("Cannot divide by zero!\n");
                break;
        }

        printf("\nDo you want to calculate again? (y/n): ");
        if (!readChoice(&again))
            break;

    } while (again == 'y' || again == 'Y');

    return 0;
}

void displayMenu(void)
{
    printf("\n====MENU CALCULATOR====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
}

// Discards any leftover characters up to (and including) the next newline.
void clearInputBuffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

// Reads a single non-whitespace character. Returns 1 on success, 0 on failure.
int readChoice(char *choice)
{
    int result = scanf(" %c", choice);
    clearInputBuffer();
    return result == 1;
}

// Reads a double after showing prompt. Returns 1 on success, 0 on failure.
int readNumber(const char *prompt, double *value)
{
    printf("%s", prompt);
    int result = scanf("%lf", value);
    clearInputBuffer();
    return result == 1;
}

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

// Returns 1 and sets *result on success, 0 if division by zero was attempted.
int divide(double a, double b, double *result)
{
    if (b == 0)
        return 0;

    *result = a / b;
    return 1;
}
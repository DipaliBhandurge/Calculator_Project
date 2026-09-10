#include<stdio.h>
//menu calculator
int main()
{
    double num1,num2;
    char ch,again;

    do
    {
        printf("\n====MENU CALCULATOR====\n");
        printf("1.Addition:\n");
        printf("2.Subtraction:\n");
        printf("3.Muliplication:\n");
        printf("4.Division:\n");
        printf("5.Exit:\n");

        printf("Enter your Choice:");
        scanf(" %c",&ch);  
        
    if(ch == '5')
      {
        printf("Exiting from calcualtor...");
        break;
      }

      if(ch>= '1' && ch<= '4')
      {
        printf("Enter number 1:");
        scanf("%lf",&num1);

        printf("Enter number 2:");
        scanf("%lf",&num2);
      }
      switch(ch)
      {
        case '1':
            printf("Addition = %.2lf\n",num1+num2);
            break;

        case '2':
            printf("Subtraction = %.2lf\n",num1-num2);
            break;

        case '3':
            printf("Multiplication = %.2lf\n",num1*num2);
            break;

        case '4':
            if(num2!=0)
            { 
            printf("Division = %.2lf\n",num1/num2);
            }
            else
            {
                printf("Number is not divided by zero");
            }
            break;

        default:
            printf("INVALID CHOICE!!");
      }
      printf("\nDo you want to calculate again? (y/n): ");
    scanf(" %c", &again);

} while(again == 'y' || again == 'Y');

  return 0;
}
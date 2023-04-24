#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator;
    double n1;
    double n2;
    double result;


    printf("\n Enter an operator: ");
    scanf("%c", &operator);

    printf("Enter the first number: ");
    scanf("%lf", &n1);

    printf("Enter the second number: ");
    scanf("%lf", &n2);

    switch(operator) {
    case '+':
        result = n1 + n2;
        printf("\n Result: %.2lf", result);
        break;

      case '-':
        result = n1 - n2;
        printf("\n Result: %.2lf", result);
        break;

        case '*':
        result = n1 * n2;
        printf("\n Result: %.2lf", result);
        break;

         case '/':
        result = n1 / n2;
        printf("\n Result: \a \t %.2lf", result);
        break;


    default:
        printf("%c is not valid", operator);
    }



    return 0;
}

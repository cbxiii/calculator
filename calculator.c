// simple calculator 
#include <stdio.h>

int main() {
    
    char operator;
    double num1;
    double num2;
    double result;

    // get operator
    printf("Please enter one of the following operators:\n");
    printf("(+)\n");
    printf("(-)\n");
    printf("(*)\n");
    printf("(/)\n");
    printf("--> ");
    scanf("%c", &operator);

    // calculate result based on operator
    switch (operator) {
        case '+':
            // get two numbers for calculation
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            result = num1 + num2;
            printf("Result is: %lf\n", result);
            break;
        case '-':
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            result = num1 - num2;
            printf("Result is: %lf\n", result);
            break;
        case '*':
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            result = num1 * num2;
            printf("Result is: %lf\n", result);
            break;
        case '/':
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            result = num1 / num2;
            printf("Result is: %lf\n", result);
            break;
        default:
            printf("Please enter a valid operator.");
            break;
    }
}
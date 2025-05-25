#include <stdio.h>
#include <math.h>

int main() {
    char operator;
    double num1, num2, result;
    int choice;

    printf("Welcome to Simple Calculator C\n");
    printf("-----------------------------------\n");

    do {
        printf("Choose an operation to perform:\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Power (^)\n");
        printf("6. Exit\n");
        printf("-----------------------------------\n");
        
        printf("Enter your choice : ");
        scanf("%d", &choice);

        if (choice == 6) {
            printf("Exit the calculator app ... Goodbye!\n");
            printf("-----------------------------------\n");
            break;
        }
        
        if (choice < 1 || choice > 6) {
            printf("\nInvalid Menu Choice.");
            printf("\n-----------------------------------\n");
            continue;
        }

        printf("\nEnter first integer: ");
        scanf("%lf", &num1);
        printf("\nEnter second integer: ");
        scanf("%lf", &num2);

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                printf("-----------------------------------\n");
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                printf("-----------------------------------\n");
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                printf("-----------------------------------\n");
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                    printf("-----------------------------------\n");
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                    printf("-----------------------------------\n");
                }
                break;
            case 5:
                result=pow(num1,num2); 
                printf("Result: %.2lf ^ %.2lf = %.2lf\n", num1, num2, result);
                printf("-----------------------------------\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 5 or please enter 6 to exit.\n");
        }

    } while (choice!=6); 

    return 0;
}

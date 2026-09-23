//Write a program that takes two numbers and an //
//operator choice (1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Division) as input, //
//performs the chosen operation using an else-if ladder, and //
//displays "Invalid Choice" for any other option.//

#include <stdio.h>

int main() {
    float num1, num2, result;
    int choice;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("\nSelect Operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &choice);

    if (choice == 1) {
        result = num1 + num2;
        printf("Result: %.2f\n", result);
    } 
    else if (choice == 2) {
        result = num1 - num2;
        printf("Result: %.2f\n", result);
    } 
    else if (choice == 3) {
        result = num1 * num2;
        printf("Result: %.2f\n", result);
    } 
    else if (choice == 4) {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %.2f\n", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } 
    else {
        printf("Invalid Choice\n");
    }

    return 0;
}
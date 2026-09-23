//Write a program that takes an integer number from the user and checks if it is Positive//
//or Negative. If the number is negative, use a goto statement to jump directly to an error//
//label that prints "Negative numbers are not allowed." Otherwise, jump to a success label that//
//prints "Valid Positive Number."//

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    if (num < 0) {
        goto error_label;
    } else {
        goto success_label;
    }

error_label:
    printf("Negative numbers are not allowed.\n");
    return 0;

success_label:
    printf("Valid Positive Number.\n");
    return 0;
}

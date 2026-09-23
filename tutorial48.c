//Write a program that takes the Total Purchase Amount as input://
#include <stdio.h>

int main() {
    float totalAmount, finalAmount, discount;
    int isPremium;

    printf("Enter Total Purchase Amount: ");
    scanf("%f", &totalAmount);

    if (totalAmount >= 1000) {
        printf("Are you a Premium Member? (1 for Yes, 0 for No): ");
        scanf("%d", &isPremium);

        if (isPremium == 1) {
            discount = totalAmount * 0.20; // 20% discount
            printf("Discount Applied: 20%%\n");
        } else {
            discount = totalAmount * 0.10; // 10% discount
            printf("Discount Applied: 10%%\n");
        }

        finalAmount = totalAmount - discount;
        printf("Discount Amount: %.2f\n", discount);
        printf("Final Payable Amount: %.2f\n", finalAmount);
    } else {
        printf("No discount available for purchases below 1000.\n");
        printf("Final Payable Amount: %.2f\n", totalAmount);
    }

    return 0;
}
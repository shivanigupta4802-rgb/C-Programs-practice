// Write a C program to input the basic salary of an employee, /
// calculate HRA as 20% and DA as 10% of the basic salary, and display the HRA, DA, and gross salary
#include<stdio.h>
int main()
{
    float bs, gs, hra, da;
    printf("enter bs:");
    scanf("%f", &bs);
    hra = bs * 0.20;
    da = bs* 0.10;
    gs = bs + da + hra;
    printf("da%.2f", da);
    printf("hra%.2f", hra);
    printf("gs = %.2f", gs);
    return 0;

}
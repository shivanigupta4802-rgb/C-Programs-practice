//Write a program that takes two inputs: Attendance Percentage//
 //and Medical Certificate Status//
 #include <stdio.h>

int main() {
    float attendance;
    int medicalCertificate;

    printf("Enter Attendance Percentage: ");
    scanf("%f", &attendance);

    if (attendance >= 75.0) {
        printf("Eligible for exam.\n");
    } else {
        printf("Do you have a medical certificate? (1 for Yes, 0 for No): ");
        scanf("%d", &medicalCertificate);

        if (medicalCertificate == 1) {
            printf("Eligible for exam with medical allowance.\n");
        } else {
            printf("Not eligible for exam due to low attendance.\n");
        }
    }

    return 0;
}
#include <stdio.h>

int main() {
    double GrossSalary, tax;

    printf("Input the gross salary of the employee: ");
    scanf("%lf", &GrossSalary);

    if (GrossSalary <= 50000) {
        tax = 0.10 * GrossSalary;
    } else if (GrossSalary <= 100000) {
        tax = 5000 + 0.15 * (GrossSalary - 50000);
    } else if (GrossSalary <= 200000) {
        tax = 15000 + 0.20 * (GrossSalary - 100000);
    } else {
        tax = 0.25 * GrossSalary;
    }

    printf("The tax due is: %.2lf\n", tax);

    return 0;
}


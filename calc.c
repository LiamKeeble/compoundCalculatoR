#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, monthly_contribution, total_amount;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the interest rate (in decimal): ");
    scanf("%lf", &rate);

    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    printf("Enter the monthly contribution: ");
    scanf("%lf", &monthly_contribution);

    int num_of_months = time * 12;
    for (int i = 0; i < num_of_months; i++) {
        principal += monthly_contribution;
        principal *= (1 + rate / 12);
    }

    printf("Total Amount after %.2lf years: %.2lf\n", time, principal);

    return 0;
}

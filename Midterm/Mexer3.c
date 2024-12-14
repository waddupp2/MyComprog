#include <stdio.h>

int main() {
    double consumpt, excess_consumpt, final_bill;
    const double rate_per_kw = 50.00;
    const double adjustment_tax_rate = 0.085;
    const double threshold = 25.00;
    printf("Enter the total kilowatt-hour consumpt: ");
    scanf("%lf", &consumpt);

    if (consumpt > threshold) {
        excess_consumpt = consumpt - threshold;
    } else {
        excess_consumpt = 0;
    }

    final_bill = excess_consumpt * rate_per_kw;
    final_bill += final_bill * adjustment_tax_rate;

    printf("\nTotal Consumpt: %.2f kWh", consumpt);
    printf("\nExcess Consumpt: %.2f kWh", excess_consumpt);
    printf("\nFinal Electric Bill: P%.2f\n", final_bill);

    return 0;
}


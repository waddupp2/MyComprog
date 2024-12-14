#include <stdio.h>

int main() {
    double weekly_sales, commission, gross_sal;
    const double regular_sal = 1000.00;
    const double commission_rate = 0.097;

   
    printf("Enter the total weekly sales in pesos: ");
    scanf("%lf", &weekly_sales);
 
    if (weekly_sales > 5000.00) {
     
        commission = weekly_sales * commission_rate;
    } else {
       
        commission = 250.00;
    }

   
    gross_sal = regular_sal + commission;

  
    printf("\nRegular Sal: P%.2f", regular_sal);
    printf("\nWeekly Sales: P%.2f", weekly_sales);
    printf("\nWeekly Commission: P%.2f", commission);
    printf("\nWeekly Gross Sal: P%.2f\n", gross_sal);

    return 0;
}


#include <stdio.h>

int main() {
    int input_price, input_tendered;
    float price, tendered, change;
    int change_in_cents;
    int denomin_20, denomin_10, denomin_5, denomin_1;
    int cent_25, cent_10, cent_5;

    printf("Enter the price of the item (e.g., 1485 for 14.85): ");
    scanf("%d", &input_price);
    printf("Enter the tendered amount (e.g., 2100 for 21.00): ");
    scanf("%d", &input_tendered);

    
    price = input_price / 100.0;
    tendered = input_tendered / 100.0;

   
    change = tendered - price;
    printf("Item price : %.2f\n", price);
    printf("Tendered amount : %.2f\n", tendered);
    printf("Change : %.2f\n\n", change);

    change_in_cents = (int)(change * 100 + 0.5);
    denomin_20 = change_in_cents / 2000;
    change_in_cents %= 2000;

    denomin_10 = change_in_cents / 1000;
    change_in_cents %= 1000;

    denomin_5 = change_in_cents / 500;
    change_in_cents %= 500;

    denomin_1 = change_in_cents / 100;
    change_in_cents %= 100;

    cent_25 = change_in_cents / 25;
    change_in_cents %= 25;

    cent_10 = change_in_cents / 10;
    change_in_cents %= 10;

    cent_5 = change_in_cents / 5;
    change_in_cents %= 5;

    
    printf("Coin Denomin\n");
    printf("20.00 pesos = %d\n", denomin_20);
    printf("10.00 pesos = %d\n", denomin_10);
    printf("5.00 pesos  = %d\n", denomin_5);
    printf("1.00 pesos  = %d\n", denomin_1);
    printf("0.25 cents  = %d\n", cent_25);
    printf("0.10 cents  = %d\n", cent_10);
    printf("0.05 cents  = %d\n", cent_5);

    return 0;
}


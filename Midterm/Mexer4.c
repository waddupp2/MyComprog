#include <stdio.h>

int main() {
    int numb1, numbs2, numbs3, largest;

    printf("Enter three integers: ");
    scanf("%d %d %d", &numb1, &numbs2, &numbs3);

    if (numb1 >= numbs2) {
        if (numb1 >= numbs3) {
            largest = numb1;
        } else {
            largest = numbs3;
        }
    } else {
        if (numbs2 >= numbs3) {
            largest = numbs2;
        } else {
            largest = numbs3;
        }
    }

    printf("The largest number is: %d\n", largest);

    return 0;
}


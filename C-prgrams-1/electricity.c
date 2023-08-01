#include <stdio.h>

    int main() 
    {
    int units;
    float charge;

    // Read the number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate the total charge based on the number of units consumed
    if (units <= 200) {
        charge = units * 1.0;
    } else if (units <= 300) {
        charge = 200 * 1.0 + (units - 200) * 1.5;
    } else {
        charge = 200 * 1.0 + 100 * 1.5 + (units - 300) * 2.0;
    }

    // Print the total charge
    printf("Total charge: %.2f\n", charge);

    return 0;
}






#include <stdio.h>

int main() {
    int far;
    float celsius;

    // Print the table header
    printf("Fahrenheit\tCelsius\n");

    // Loop through the Fahrenheit temperatures from -40 to 220
    for (far = -40; far <= 220;far=far+10) {
        // Convert the temperature to Celsius
        celsius = 5.0/9.0 * (far - 32);

        // Print the temperature in both Fahrenheit and Celsius
        printf("%d\t\t%.1f\n", far, celsius);
    }

    return 0;
}
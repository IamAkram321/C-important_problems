#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Enter the two angles of triangle:\n");
    scanf("%f%f", &a, &b);
    c = 180 - (a + b);
    printf("The third angle of triangle is %.2lf", c);
    return 0;
}
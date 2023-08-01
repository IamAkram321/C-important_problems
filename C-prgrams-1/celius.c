#include <stdio.h>
int main()
{
    int far;
    float cel;
    printf("Celcius\t  Fahrenheit\n");
    for (far = -40; far <=220; far=far+10)
    {
        cel = 5.0 / 9.0 * (far - 32);
        printf("%.2f C\t is %d F\n", cel, far);
        
    }

}
/*Write a C program to check whether the given number is divisible by 2 or 7*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter number:\n");
    scanf("%d", &num);
    int a = 2, b = 7;
    if (num % 2 == 0)
    {
        printf("Yes! It is divisible by %d but not by %d", a, b);
    }
    else if (num % 7 == 0)
    {
        printf("The Yes! It is divisible by %d but not by %d", b, a);
    }
    else
        printf("Error\n");

    return 0;
}
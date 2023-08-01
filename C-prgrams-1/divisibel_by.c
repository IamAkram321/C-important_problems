/*C program to check whether the number is divisible by 2 and 7 or not.*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter number:\n");
    scanf("%d", &num);
    int a = 2, b = 7;
    if (num % 2 == 0 && num%7 == 0)
    {
        printf("Yes! It is divisible by %d and %d", a, b);
    }
    else
    printf("No!\n");
    return 0;
}
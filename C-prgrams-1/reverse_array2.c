/*Write a c program to print an array in reverse order*/
#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    printf("original array:");
    for (int i = 0; i <= 4; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\n");
    printf("reverse order:");
    for (int i = 4; i >= 0; i--)

    {
        printf(" %d", a[i]);
    }
    return 0;
}
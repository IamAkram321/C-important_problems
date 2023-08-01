/*C-program to swap two numbers using function*/
#include <stdio.h>
void swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()
{
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);
    printf("\n Numbers before swapping:\n");
    printf("\na=%d b=%d\n", a, b);
    swap(&a, &b);
    printf("\n Numbers after swapping:\n");
    printf("\na=%d b=%d\n", a, b);
    return 0;
}
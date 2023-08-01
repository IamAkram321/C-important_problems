/*C-program to sort an array in asecending order*/
#include <stdio.h>

int main()
{
    int A[20], n, i, j, a;
    printf("Enter number of elements in an array:\n");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j=i+1 ; j < n; j++)
        {
            if (A[i] > A[j])
            {
                a = A[i];
                A[i] = A[j];
                A[j] = a;
            }
        }
    }
    printf("The numbers in ascending order is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}

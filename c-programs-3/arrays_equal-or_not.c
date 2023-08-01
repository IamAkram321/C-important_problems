#include <stdio.h>

int main()
{
    int i;
    int a[5] = {10, 15, 20, 25, 30};
    int b[5] = {10, 15, 20, 25, 30};
    printf("The elements of array a are:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("The elements of array b are:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", b[i]);

    }
    printf("Checking whether a[]=b[]....\n");
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == b[i])
        {
            continue;
        }
        else
            break;
    }
    if (i == 5)
    {
        printf("The arrays are equal\n");
    }
    else
        printf("The arrays are not equal\n");

    return 0;
}
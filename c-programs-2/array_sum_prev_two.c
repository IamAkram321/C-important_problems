/*ARRAY- SUM OF PREVIOUS TWO NUMBERS*/
#include <stdio.h>

int main()
{
    int arr[100], size, sum = 0, flag = 1;
    printf("\nHow many students are standing in the line?");
    scanf("%d", &size);
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 2; i < size; i++)
    {
        if (arr[i] == arr[i - 2] + arr[i - 1])
        {
            printf("Yes! Element at %d is sum of previous two\n", i);
            flag = 0;
        }
    }
    if (flag == 1)
    {
        printf("\nNo Element is found to be the sum of previous two");
    }
return 0;
}
#include <stdio.h>
linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
       
    }
     return -1;
}
int main()
{
    int arr[] = {1, 3, 5, 6, 4, 78, 67, 98, 89, 45};
    // int size = sizeof(arr) / sizeof(int);
    int size = 10;
    int element = 45;
    int searchIndex = linearSearch(arr, size, element);
    printf("The element %d was found at index %d\n", element, searchIndex);

    return 0;
}
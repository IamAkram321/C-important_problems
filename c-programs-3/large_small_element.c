/*C-program to find the largest and smallest element in an array:*/
#include<stdio.h>

int main(){
    int a[10],n,i,small,large;
    printf("Enter the no.of elements in array:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for (  i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    small=a[0];
    large=a[0];
    for (  i = 1; i < n; i++)
    {
       if (a[i]>large)
       {
        large=a[i];
       }
       if (a[i]<small)
       {
        small=a[i];
       }
       
       
    }
    printf("The largest element of the array is %d\n",large);
    printf("The smallest element of the array is %d\n",small);
    
    return 0;
}
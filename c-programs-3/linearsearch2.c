#include<stdio.h>

int main(){
    int a[20],n,i,j,s;
    printf("Enter no. of elements in array:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for (  i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search:\n");
    scanf("%d",&s);
    for (  i = 0; i < n; i++)
    {
        if (a[i]==s)
        {
            printf("The element %d is found at %d",s,i+1);
            break;
        }
        
    }
    if (a[i]==n)
    {
        printf("The element %d is not fond",s);
    }
    
    return 0;
}
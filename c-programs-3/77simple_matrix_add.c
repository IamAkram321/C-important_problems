#include<stdio.h>

int main(){
    int a[100][100],b[100][100],sum[100][100],i,j,r,c;
    printf("Enter no. of rows:\n");
    scanf("%d",&r);
    printf("Enter no. of columns:\n");
    scanf("%d",&c);
    printf("Enter first matrix elements:\n");
    for (i = 0; i <  r; i++)
    {
        for (  j = 0; j <  c; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Enter second matrix elements:\n");
    for (i = 0; i <  r; i++)
    {
        for (  j = 0; j <  c; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    for (i = 0; i <  r; i++)
    {
        for (  j = 0; j <  c; j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
        
    }
    printf("The final array elements are:\n");
    for (  i = 0; i < r; i++)
    {
        for (  j = 0; j < c; j++)
        {
            printf("%d ",sum[i][j]);
        }
       printf("\n"); 
    }
    
    
    return 0;
}
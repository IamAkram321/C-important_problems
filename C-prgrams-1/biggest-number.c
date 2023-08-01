/* Write a C program to display the biggest number entered by user*/
#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
    {
         printf("%d is the largerst\n",a);
    }
    else if (b>a && b>c)
    {
        printf("%d is the largest\n",b);
    }
    else
    printf("%d is the largest\n",c);
    
    return 0;
}
/*Write a C program to check whether the number is even or odd*/
#include<stdio.h>

int main(){
    int a;
    printf("Enter any number:\n");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("The number is even",a);
    }
    else
    printf("The number is odd",a);
return 0;
}
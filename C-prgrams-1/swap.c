/*Write a c program to swap two numbers without using third variable*/
#include<stdio.h>
int main(){
    int a=5,b=6;
    printf("Enter any two numbers");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping :%d and %d",a,b);
    return 0;
}
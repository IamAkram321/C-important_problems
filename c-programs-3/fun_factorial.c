#include<stdio.h>

void main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    fact(n);
    printf("The factorial of number is %d",fact(n));
    
    
}
int fact(int n){
    if (n==1)
    {
        return 1;
    }
    if (n!=1)
    {
        return (n*fact(n-1));
    }
    
}
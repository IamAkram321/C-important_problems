// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char c[8]={'C','O','M','P','U','T','E','R'};
    for(int i=0;i<=7;i++)
    {
        if(c[i]=='R')
        {
            printf("The position of R is %d",i);
        }
    }

    return 0;
}
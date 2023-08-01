#include<stdio.h>

int main(){
    float v,u,a,t;
    printf("Enter initial velocity\n");
    scanf("%f",&u);
    printf("Enter acceleration\n");
    scanf("%f",&a);
    printf("Enter time\n");
    scanf("%f",&t);
    v=a*t+u;
    printf("The final velocity is%.2f",v);

    return 0;
}
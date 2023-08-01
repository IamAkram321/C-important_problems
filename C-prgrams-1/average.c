/*Writa a C program to calculate total,average,percentage of 5 subjects*/
#include <stdio.h>

int main()
{
    int phy, chem, maths, english, beee;
    float total, average, percentage;
    printf("Enter the marks of 5 subjects:\n");
    scanf("%d%d%d%d%d", &phy, &chem, &maths, &english, &beee);
    total = phy + chem + maths + english + beee;
    printf("Total:%.2lf\n", total);
    average = total / 5;
    printf("Average:%.2lf\n", average);
    percentage = (total / 500) * 100;
    printf("Percentage is %.2lf\n", percentage);
    return 0;
}
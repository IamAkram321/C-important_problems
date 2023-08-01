/*C program to take employee details and print the highest salary of an employee*/
#include <stdio.h>
struct employee
{
    int eno;
    char ename[20];
    int salary;
} e[10];

int main()
{
    int i, high, n;
    printf("How many employee you want to accept:\n");
    printf("Enter the limit\n");
    scanf("%d", &n);
    printf("--------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("Employee Number:\n");
        scanf("%d", &e[i].eno);
        printf("Employee Name:\n");
        scanf("%s", &e[i].ename);
        printf("Employee Salary:\n");
        scanf("\n%d", &e[i].salary);
        printf("------------------------------------\n");
    }
    high = e[0].salary;
    for (i = 0; i < n; i++)
    {
        if (e[i].salary > high)
        {
            high = e[i].salary;
        }
    }
    printf("Highest Salary Employee Details:\n");
    printf("\n--------------------------------------\n");
    printf("\nEmployee No.:      Name        Salary");
    for (i = 0; i < n; i++)
    {
        if (e[i].salary == high)
        {
            printf("\n%d\t%s\t%d\n", e[i].eno, e[i].ename, e[i].salary);
        }
    }

    return 0;
}
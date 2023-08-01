// #include <stdio.h>
// #include <string.h>
// struct employee
// {
//     int id;
//     char name[50];
//     float salary;
// } e1, e2;
// int main()
// {
    
//     e1.id = 101;
//     strcpy(e1.name, "MD AKRAM");
//     e1.salary = 90000;
//     e2.id = 102;
//     strcpy(e2.name, "JAMES BOND");
//     e2.salary = 80000;
//     printf("Employee 1 id=%d\n", e1.id);
//     printf("Employee 1 name=%s\n", e1.name);
//     printf("Employee 1 salary=%.2f\n", e1.salary);
//     printf("Employee 2 id=%d\n", e2.id);
//     printf("Employee 2 name=%s\n", e2.name);
//     printf("Employee 2 salary=%.2f\n", e2.salary);
//     return 0;
// }
#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[50];
    float salary;
} e1, e2;
int main()
{
    int id1,id2;
    char name1,name2;
    float salary1,salary2;
    // printf("Enter the eployee 1 id:\n");
    // scanf("%d",&id1);
    
    e1.id = 101;
    strcpy(e1.name, "MD AKRAM");
    e1.salary = 90000;
    e2.id = 102;
    strcpy(e2.name, "JAMES BOND");
    e2.salary = 80000;
    printf("Employee 1 id=%d\n", e1.id);
    printf("Employee 1 name=%s\n", e1.name);
    printf("Employee 1 salary=%.2f\n", e1.salary);
    printf("Employee 2 id=%d\n", e2.id);
    printf("Employee 2 name=%s\n", e2.name);
    printf("Employee 2 salary=%.2f\n", e2.salary);
    return 0;
}
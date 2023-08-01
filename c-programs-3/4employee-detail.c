#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    char designation[20];
    char department[20];
    int salary;
};

int main(){
    struct employee a,b;
    printf("-------------------------------\n");
    printf("*******Employee Details*******\n");
    printf("-------------------------------\n");
    printf("Enter employee a id:\n");
    scanf("%d",&a.id);
    printf("Enter employee a name:\n");
    scanf("%s",&a.name);
    printf("Enter employee a designation:\n");
    scanf("%s",&a.designation);
    printf("Enter employee a department:\n");
    scanf("%s",&a.department);
    printf("Enter employee a salary:\n");
    scanf("%d",&a.salary);
    printf("\n...................................\n");
    printf("Employee a id=%d\n",a.id);
    printf("Employee a name=%s\n",a.name);
    printf("Employee a designation=%s\n",a.designation);
    printf("Employee a department=%s\n",a.department);
    printf("Employee a salary=%d\n",a.salary);
    printf("-------------------------------\n");
    printf("*******Employee Details*******\n");
    printf("-------------------------------\n");
    printf("Enter employee b id:\n");
    scanf("%d",&b.id);
    printf("Enter employee b name:\n");  
    scanf("%s",&b.name); 
    printf("Enter employee b designation:\n");
    scanf("%s",&b.designation);
    printf("Enter employee b department:\n");
    scanf("%s",&b.department);
    printf("Enter employee b salary:\n");
    scanf("%d",&b.salary);
    printf("\n...................................\n");
    printf("Employee b id=%d\n",b.id);
    printf("Employee b name=%s\n",b.name);
    printf("Employee b designation=%s\n",b.designation);
    printf("Employee b department=%s\n",b.department);
    printf("Employee b salary=%d\n",b.salary);
    return 0;
}
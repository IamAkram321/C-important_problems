#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    char designation[20];
    char department[20];
    int salary[20];
}e[2];

void main(){
    int i;
    for (i = 0; i < 2; i++)
    {
      printf("---------------------------\n");
      printf("*******Employee Details*******\n");
      printf("---------------------------\n");
      printf("Enter employee id:");
      scanf("%d",&e[i].id);
      printf("Enter employee name:");
      scanf("%s",&e[i].name);
      printf("Enter employee designation:");
      scanf("%s",&e[i].designation);
      printf("Enter employee department:");
      scanf("%s",&e[i].department);
      printf("Enter employee salary:");
      scanf("%d",&e[i].salary);
    }
    printf("---------------------------\n");
    printf("Details of employee are:\n");
    printf("---------------------------\n");
    for( i = 0; i < 2; i++)
    {
        printf("Employee id=%d\n",e[i].id);
        printf("Employee name=%s\n",e[i].name);
        printf("Employee designation=%s\n",e[i].designation);
        printf("Employee department=%s\n",e[i].department);
        printf("Employee salary=%d\n",e[i].salary);  
       getch();
    }
}
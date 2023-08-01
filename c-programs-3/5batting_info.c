/*C-program to accept batting information:*/
#include <stdio.h>
struct player
{
    char name[20];
    int runs;
};

int main()
{
    int i, s = 0;
    struct player a[11];
    printf("Enter name of player   Runs scored\n");
    printf("--------------------------------\n\t");
    for (i = 0; i <= 10; i++)
    {
        scanf("%s", &a[i].name);
        scanf("%d", &a[i].runs);
        printf("\t");
    }
    for (i = 0; i <= 10; i++)
    {
        s = s + a[i].runs;
    }
    printf("\n------------------------------------\n");
    printf("The total no. of runs scored is:%d", s);
    return 0;
}
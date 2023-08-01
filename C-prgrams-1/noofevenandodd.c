#include<stdio.h>
#include<conio.h>
int main()
{
    int num[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, rem, odd = 0, even = 0, j;

    printf("Array numbers:\n");
    for (j = 0; j <=8; j++)
    {
        printf(" %d ", num[j]);
    }
    printf("\n");

    for (int i = 0; i < 9; i++)
    {
        while (num[i] != 0)
        {
            rem = num[i] % 10;
            if (rem % 2 == 1)
            {
                odd++;
            }
            else
            {
                even++;
            }
            num[i] = num[i] / 10;
        }
    }

    // scanf("%d", &num);

    printf("No of even digits is %d\n", even);
    printf("No of odd digits is %d\n", odd);
    return 0;
}
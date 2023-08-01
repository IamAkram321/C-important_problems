/*2D-Array: BMI Calculation */
#include <stdio.h>

int main()
{
    float bmi[10][2];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the height of person %d(in meter):\n", i);
        scanf("%f", &bmi[i][0]);
        printf("Enter the weight of person %d(in kg):\n", i);
        scanf("%f", &bmi[i][1]);
    }
    printf("The height weight matrix is :\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%.4f\t", bmi[i][j]);
            if (j == 1)
            {
                printf(" \n");
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The BMI of person %d is %.4f\n", i, bmi[i][1] / (bmi[i][0] * bmi[i][0]));
    }
    return 0;
}
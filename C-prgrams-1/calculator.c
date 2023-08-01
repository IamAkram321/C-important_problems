#include <stdio.h>

int main()
{
    int a, b, choice;
    // char c;
    
        printf("Menu\n 1.Addition\n2.Subtraction\n3.Division\n4.Multiplication\n5.Modulus\n6.Square\n");
        printf("Input your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the two integers:\n");
            scanf("%d%d", &a, &b);
            printf("Output:%d", (a + b));
            break;
        case 2:
            printf("Enter the two intergers:\n");
            scanf("%d%d", &a, &b);
            printf("Output:%d", (a - b));
            break;
        case 3:
            printf("Enter the two intergers:\n");
            scanf("%d%d", &a, &b);
            printf("Output:%d", (a / b));
            break;
        case 4:
            printf("Enter the two intergers:\n");
            scanf("%d%d", &a, &b);
            printf("Output:%d", (a * b));
            break;
        case 5:
            printf("Enter the two intergers:\n");
            scanf("%d%d", &a, &b);
            printf("Output:%d", (a % b));
            break;
        case 6:
            printf("Enter a  interger:\n");
            scanf("%d", &a);
            printf("Output:%d", (a * a));
            // or
            //  printf("Output:%d", (b * b));
           break;
        default:
            printf("Invalid Input\n");
            break;
        }
       
    return 0;
}
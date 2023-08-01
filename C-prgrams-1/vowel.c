#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character\n");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("%c is vowel", ch);
    }
    else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')

    {
        printf("%c is vowel", ch);
    }
    else
    {
        printf("%c is not vowel\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    char ch = 'a';
    printf("The value of char if %d\n", ch);
    if (ch >= 97 && ch <= 122)
    {
        printf("This is lowercase\n");
    }
    else
    {
        printf("This is not lowercase.");
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("The Remainder is %d\n", n % 97);
    if (n % 97 == 0)
    {
        printf("The number is divisible by 97");
    }
    else
    {
        printf("The number is not divisible by 97");
    }
    return 0;
}
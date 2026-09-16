#include <stdio.h>

int sum(int); //function prototype

int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}

int main()
{
    int n = 10;
    int S = sum(n);

    printf("The sum of first %d natural number is %d", n, S);

    return 0;
}
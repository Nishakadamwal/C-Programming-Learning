#include <stdio.h>
// multipication table of 10 in reversed order
int main()
{
    int i, n = 10;
    for (i = 10; i >= 1; i--)
    {
        printf("10 * %d = %d\n", i, 10 * i);
    }
    return 0;
}
#include <stdio.h>
// multiplication table of n
int main()
{
    int i,n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d*%d = %d\n",n ,i ,n*i);
    }
    return 0;
}
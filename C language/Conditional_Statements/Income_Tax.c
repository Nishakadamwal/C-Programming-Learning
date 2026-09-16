#include <stdio.h>

int main()
{
    int income;
    float tax = 0;

    printf("Enter your income: ");
    scanf("%d", &income);

    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income <= 500000)
    {
        tax = 0.05 * (income - 250000);
    }
    else if (income <= 1000000)
    {
        tax = 0.05 * (500000 - 250000)
            + 0.20 * (income - 500000);
    }
    else
    {
        tax = 0.05 * (500000 - 250000)
            + 0.20 * (1000000 - 500000)
            + 0.30 * (income - 1000000);
    }

    printf("The total tax you need to pay is %.2f", tax);

    return 0;
}
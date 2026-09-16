#include <stdio.h>

int main()
{
    int length, breadth;

    printf("The value of length and breadth is:");
    scanf("%d%d", &length, &breadth);

    float area = length * breadth;

    printf("The area of Rectangle is %.2f", area);
    return 0;
}
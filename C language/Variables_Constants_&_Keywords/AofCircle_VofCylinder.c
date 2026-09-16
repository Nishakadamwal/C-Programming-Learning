#include <stdio.h>

int main()
{
    int radius,height;
    printf("The value of radius is: ");
    scanf("%d", &radius);
    printf("The area of circle is %.2f\n", 3.14 * radius * radius);
    
    printf("The height of cylinder is:");
    scanf("%d",&height);
    printf("The volume of cylinder is %.2f", 3.14*radius*radius*height);

    return 0;
}
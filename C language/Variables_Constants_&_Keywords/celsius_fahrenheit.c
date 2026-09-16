#include <stdio.h>

int main()
{
    int celsius = 25;
    float fahrenheit = (celsius * 9.0 / 5.0) + 32;
    printf("The value of celsius into fahrenheit is %.2f", fahrenheit);
    return 0;
}
#include <stdio.h>
float fahrenheit(float c); //function prototype

float fahrenheit(float c) {
    float F = (c * 9.0 / 5.0) + 32;
    return F;
}

int main() {
    float c = 25;
    float f = fahrenheit(c);
    printf("Fahrenheit = %.2f", f);
    return 0;
}
#include <stdio.h>

float force(float); //function prototype

float force(float m){
    return m*9.8;
}
int main(){
    float F = force(5);
    printf("The force of attraction on a body is %.2f", F);
    return 0;
}
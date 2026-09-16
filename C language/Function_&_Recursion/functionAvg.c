#include <stdio.h>
float avg(int,int,int); //function prototype

float avg(int a, int b, int c){
    int sum = a+b+c;
    float average = sum/3.0;
    return average;
}
int main(){
    float X = avg(2,4,5);
    printf("The average is %.2f", X);
    return 0;
}
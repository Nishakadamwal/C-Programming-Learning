#include <stdio.h>
//Sum of the number occuring in multiplication table of 8
int main(){
    int i, sum=0;
    for(i=1; i<=10; i++){
        sum=sum+(8*i);
    }
    printf("Sum is %d", sum);
    return 0;
}
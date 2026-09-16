#include <stdio.h>
//Sum first 10 natural number
int main(){
    int i=1, sum=0;
    while(i<=10){
        sum=sum+i; // OR sum+=i
        i++;
    }
    printf("Sum is %d", sum);
    return 0;
}
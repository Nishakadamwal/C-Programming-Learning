#include <stdio.h>
//using do while loop 
int main(){
    // print first n natural number 
    int i=1,n; //i=1 because natural number
    printf("Enter value of n:");
    scanf("%d", &n);
    do{
        printf("%d\n", i);
        i++; 
    } while(i<=n);
    return 0;
}
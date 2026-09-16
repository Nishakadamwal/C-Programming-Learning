#include <stdio.h>
int fibonacci(int n);  // function prototype

int fibonacci(int n) {
    if (n == 0)   //base case
        return 0;
    else if (n == 1) 
        return 1;
    else 
        return fibonacci(n - 1) + fibonacci(n - 2); //recursive case
}
int main() {
    int n;
    printf("Enter the position: ");
    scanf("%d", &n);
    printf("The %dth Fibonacci element is %d", n, fibonacci(n));
    return 0;
}
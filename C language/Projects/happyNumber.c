#include <stdio.h>
int getSum(int n){
    int sum = 0;
    while (n > 0){
        int digit = n % 10;
        sum = sum + digit * digit;
        n = n / 10;
    }
    return sum;
}
int isHappy(int n){
    int visited[1000] = {0};
    while (n != 1){
        if (visited[n] == 1)
            return 0;   // Not happy
        visited[n] = 1;
        n = getSum(n);
    }
    return 1;   // Happy
}
int main(){
    int n;
    scanf("%d", &n);
    if (isHappy(n))
        printf("Happy Number");
    else
        printf("Not a Happy Number");
    return 0;
}
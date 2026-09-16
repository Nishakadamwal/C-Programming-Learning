#include <stdio.h>
void printStars(int n){
    if (n == 0)
        return;
    printf("*");
    printStars(n - 1);
}

void printPattern(int n, int row){
    if (row > n)
        return;
    printStars(row);
    printf("\n");
    printPattern(n, row + 1);
}
int main(){
    int n = 5;
    printPattern(n, 1);
    return 0;
}
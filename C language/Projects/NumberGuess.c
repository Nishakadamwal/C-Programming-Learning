#include <stdio.h>
#include <stdlib.h>
#include <time.h> //this library tell us about time

int main()
{
    srand(time(0)); // Initialize random number generator 
    
    int randomNumber = (rand() % 100) + 1; // Generate a random number between 1 and 100
    int no_of_guesses = 0;
    int guessed;

    do{
        printf("Guess the number: ");
        scanf("%d", &guessed);

        if(guessed>randomNumber){
            printf("Lower Number Please!\n");
        }
        else if(guessed<randomNumber){
            printf("Higher Number Please!\n");      
        }
        else{
            printf("CONGRATS!!\n");
        }
        no_of_guesses++;

    } 
    while(guessed!= randomNumber);
    printf("You Guess the number in %d guesses", no_of_guesses);
    return 0;
}
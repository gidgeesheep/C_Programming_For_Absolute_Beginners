// The Chapter 3 end of chapter problems
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
//A number guessing game, using the isdigit() function, random number generation, and user input.

    int randomNumber()
    {
        srand(time(NULL));
        int r = (rand() % 10);

        return r;
    }


    int problemOne(){

        int rNum = randomNumber();
        char userInput = ' ';

        printf("Guess a number from 0 to 9: ");
        scanf("%c", &userInput);

        if (isdigit(userInput) >= 1) {
            printf("The Random Number was %d, and you guessed %c\n", rNum, userInput);
            if(userInput == rNum){
                printf("You guessed right.");
            }
            else {
                printf("You guessed wrong.");
            }
        }
        else {
            printf("That is not a digit.\n");
        }

    }


int main()
{
    problemOne();

    return 0;
}

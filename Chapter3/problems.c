// The Chapter 3 end of chapter problems
#include <stdio.h>
#include <time.h>
#include <ctype.h>
//A number guessing game, using the isdigit() function, random number generation, and user input.

    int randomNumber()
    {


    }

    int enterADigit(char input){

        char cUserInput = input;

        if (isdigit(cUserInput) == 1){
            printf("Good job, that is a digit.\n");
            return 1;
        }
        else {
            printf("That is not a digit.\n");
            return 0;
        }
    }

int main()
{
    printf("Enter a digit: ");
    int user;

    
    int digitCheck = enterADigit();

    return 0;
}

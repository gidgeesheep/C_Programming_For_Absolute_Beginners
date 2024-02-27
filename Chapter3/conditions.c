#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>

//the ifs, ands and buts about it
int main()
{
    //https://stackoverflow.com/questions/822323/how-to-generate-a-random-int-in-c
    srand(time(NULL));   // Initialization, should only be called once.
    int r = rand();      // Returns a pseudo-random integer between 0 and RAND_MAX.

    void AC(){
        //if statement about ac and temperature
        const int IROOMTEMP = 70;//fahrenheit
        bool bAC = false;
        int iAttempts = 0;

        int iCurrentTemperature = 0;


        printf("What is the current temperature? ");
        scanf("%d", &iCurrentTemperature);

        if(isdigit(iCurrentTemperature) == 0){

            if (iCurrentTemperature > 80){
                printf("The AC is on.");
                bAC = true;
            }

            else{
                printf("The AC is off.");
                bAC = false;
            }
        }

        else{
            printf("That is not a number.");
        }
    }


    //a nested if statement with about banking
    void banking(){
        int iSelection = 0;
        float fBalance = 500.00;
        float fTransac = 0.0;

        printf("\n\n\t\tWelcome to Banking, USER\n");
        printf("\nYour current balance is $%.2f", fBalance);

        printf("\n\tMake a Selection\n\n");

        printf("1\tWithdraw from account\n");
        printf("2\tDeposit to account\n");
        scanf("%d", &iSelection);

        //Deposit
        if (iSelection == 2){
            printf("How much will you deposit? ");
            scanf("%f", &fTransac);
            fBalance = fBalance + fTransac;

            printf("Your new balance is $%.2f", fBalance);
            fTransac = 0.0;

        }

        //Withdraw
        if (iSelection == 1){
            printf("How much do you want to withdraw? ");
            scanf("%f", &fTransac);

            if (fTransac <= fBalance){
                fBalance = fBalance - fTransac;
                printf("You\'ve withdrawn $%.2f from your account\nYour new balance is $%.2f", fTransac, fBalance);
                printf("\nThank you for banking with Bank. Goodbye.\n");
            }
            //Lack of Funds
            else{
                printf("\nYou do not have sufficient funds for that action.\n");
                printf("Goodbye.\n");
            }
        }

        //Invalid Selection
        else{
            printf("\nThat is not a valid choice.");
            printf("\nThis will not go unpunished, your computer is now forfeit to us.\nGOODBYE\n");
        }
    }

    void isUpper(){
        char cInput = '\0';

        printf("Type the character uppercase A: ");
        scanf("%c", &cInput);

        if (cInput == 'a' || cInput == 'A'){
            if(cInput == 'A'){
                printf("That\'s right, great job.\n");
            }
            else{
                printf("That\'s the right letter, but the wrong case.\n");
            }
        }
        if (cInput != 'A' && cInput != 'a'){
            printf("That was wrong, too bad.\n");
        }
    }

    void checkRange(){
        int iUpper = 10;
        int iLower = 1;
        int iInput;


        printf("Please enter a number between %d and %d : ", iLower, iUpper);
        scanf("%d", &iInput);

        if(iInput < iUpper && iInput > iLower){
            printf("That is in range.\n");
        }
        else{
            printf("That was not in range.\n");
        }
    }

    void theIsDigitTester(){
        char cChar = 'a';
        int iInt = 3;
        int iLgInt = 194482;
        float fFlt = 88.1;

        printf("I want to get an under standing of the isdigit() function.\n");
        printf("I have 4 examples that I will run into isdigit().\n");
        printf("The idea is that isdigit will return a 1 if a digit is passed into its parameter, otherwise return 0.\n\n");

        printf("A char, c\n", cChar);
        printf("A single digit int, %d\n", iInt);
        printf("A longer, multiple digit int, %d\n", iLgInt);
        printf("Finally, a float, %f\n", fFlt);

        printf("\nChar test: Result: %d\n", isdigit(cChar));
        printf("Int test: Result: %d\n", isdigit(iInt));
        printf("Longer Int test: Result: %d\n", iLgInt);
        printf("Float test: Result: %d\n", fFlt);

        printf("\nResults are showing that is digit is not playing nice with multiple data types.\n");
        printf("One more test, using a char that is set to 2. A non-int datatype, numeral.\n");
        printf("Is char 2 a digit? : %d\n", isdigit('2'));

        printf("\nNow the hard part, checking for digits that are longer than one byte, like 77 or 49820.\n");
        char sLongNumber[] = "123";
        printf("Our number to test is %s\n", sLongNumber);

        printf("It don't work. Lmao, it can only be a single digit. \nOh well, I'm the programmer, I'll figure it out. Testing over.\n");


    }

    void enterADigit(){
        char cUserInput = '\0';

        printf("Enter a single digit: ");
        scanf("%c", &cUserInput);

        if (isdigit(cUserInput) == 1){
            printf("Good job, that is a digit.\n");
        }
        else {
            printf("That is not a digit.\n");
        }

    }

    void switchCaseFun() {
        char cUInput = '\0';

        printf("Let me tell you a short story.\nType the character of the story you'd like to read.\n");
        printf("A: A dog story\n"
               "B: A story about rain\n"
               "C: Some info about rocks\n"
               "D: No story\n");


        printf("Selection: ");
        scanf(" %c", &cUInput);

        if (isdigit(cUInput))
            {
               printf("Not a number, a letter.\n");
               printf("No stories for you.\n");
               return;
            }

        //super simple fliparoo to make lowercase upper, and I thought of it without any prompting to do so
        if (cUInput > 90){
            cUInput = cUInput - 32;
        }



        switch (cUInput){

            case 'A':
                printf("Once, there was a dog. He had large ears, and 4 paws. He ran from place to place all day.\n");
                break;
            case 'B':
                printf("I love the rain, so when it rains, I like to sit out on the porch to watch it.");
                break;
            case 'C':
                printf("Rocks and minerals, make up the majority of mass that constitutes the Earth.");
                break;
            case 'D':
                printf("Goodbye.");
                break;
            default:
                printf("That\'s no good.");
                break;
        }


    }

    //Not very useful
    char getUserDigit(){
        int gotInt = 0;
        char response = 0;

        while (!gotInt){
            scanf(" %c", &response);

            if (isdigit(response)){
                gotInt = 1;
            }
            else{
                printf("Try Again\n");
            }


        }

        return response;
    }

    void printManyRndNumbers(int repeatMax){

        int iCount = 0;
        int iRepeat = repeatMax;
        while (iCount < iRepeat){
            printf("%d ", (rand() % 9) );
            iCount++;
        }
    }

    //only changes randomly every second from the time input
    //I can fix this later
    int rollSixSidedDie(){
        int result = 0;
        result = (rand() % 6) + 1;
        return result;
    }

    void fortuneCookieGame(){
        int iRandomNum = 0;
        iRandomNum = rollSixSidedDie();

        printf("Your fortune is ...\n");

        switch (iRandomNum){
        case 1:
            printf("Not looking good for you.\n");
            break;
        case 2:
            printf("Doesn\'t seem too bad.\n");
            break;
        case 3:
            printf("Could be a good day.\n");
            break;
        case 4:
            printf("Looks good from here.\n");
            break;
        case 5:
            printf("This is going to be a great day.\n");
            break;
        case 6:
            printf("Clouds obscure my judgment.\n");
            break;
        }
    }

    void diceGame(){
        int guess = 0;
        int diceRoll = 0;
        diceRoll = rollSixSidedDie();

        printf("Guess a number from 1 to 6 : ");
        scanf("%d", &guess);

        if (guess == diceRoll) {
            printf("The Dice Rolled %d\n", diceRoll);
            printf("You win!\n");
        }
        else {
            printf("The Dice Rolled %d\n", diceRoll);
            printf("You lose...\n");
        }

    }

    void gameLoop(){
        int iLoopCount = 0;

        while (iLoopCount < 1000){
            iLoopCount ++;
        }
        printf("Game over");
    }



    return 0;
}

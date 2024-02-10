#include <stdio.h>

int main()
{
    //I will now create some variable with different data types
    int x;
    int y;
    int a, b, c;

    float distance;
    float time;
    float velocity;

    char color;
    char cat;
    char fruit;


    /*  It is a good idea to initialize variable before we use them, in C, because they may have had data stored in them previously
    *   Don't be fooled. There are no shortcuts.
    *   All variables must be individually initiallized
    *
    *   This pain is temporary. You are going to become more conscious of you programming,
    *   making you programming god for all to fear and love.
    */

    a = 0, b = 0, c = 0, x = 0, y = 0;

    distance = 0.0, time = 0.0, velocity = 0.0;

    color = '\0', cat = '\0', fruit = '\0';

    // You can also assign in a single line which is easier and shorter

    int friends = 5;
    char fav_letter = 'B';
    float height = 234.2124;

    //  When you want to print something, tell the computer how to interpret the data that it sees next with a conversion specifier
    // so far the 3 conversions we have discussed are %d for ints, %f for floats, and %c for chars
    // %f and %c are easy to remember, think of %d as data. I'll work on that

    printf("There are this many friends %d\n", friends);
    printf("Your favorite letter is %c\n", fav_letter);
    printf("The current height is %f", height); printf("m\n");

    // maybe the conversion sign %d is best thought of as "data" like int is the purest form of "data"
    int love_meter = 100;
    printf("\nYour love meter read %d\n", love_meter);

    //  Conversion sign %f for floating point numbers has some extra functionality.
    //  Default behavior prints a full 6 digits after the floating point

    float damage = 12.56;
    printf("Damage Dealt%f\n", damage);

    //  The amount of digits after the floating point can be controlled with a bit of code places between the % and the f
    //  The code is referred to as a number scheme. example %.3f would print only three point of precision

    float dynamic_number = 5.34891500;
    printf("Default Float Behavior %f\n\n", dynamic_number);
    printf("Modified Float Behavior %.1f\n", dynamic_number);
    printf("Modified Float Behavior %.2f\n", dynamic_number);
    printf("Modified Float Behavior %.3f\n", dynamic_number);
    printf("Modified Float Behavior %.4f\n", dynamic_number);
    printf("Modified Float Behavior %.5f\n", dynamic_number);
    printf("Modified Float Behavior %.6f\n", dynamic_number);

    /*Behavior becomes unpredictable at this point, cause unknown so far. Better to not do it
    printf("Modified Float Behavior %.7f\n", dynamic_number);
    printf("Modified Float Behavior %.8f\n", dynamic_number);
    printf("Modified Float Behavior %.9f\n", dynamic_number);
    printf("Modified Float Behavior %.10f\n", dynamic_number);

    We'll Comment it out for safety
    */

    // Next is char, as well as some additonal functionality of printf function

    char lemon = 'L';
    char apple = 'A';
    char gooseberry = 'G';

    //  Use %c to print out a char. Print more than one char in a single printf.
    //  Add more conversion signs for each char
    //  The Conversion sign can be places anywhere in the string,and the order of the variables called after the string

    printf("Fruity Letters : '%c'emon '%c'apple '%c'ooseberry\n", lemon, apple, gooseberry);

    //  Constant data values are unchanging readonly data that needs to be set constant and declared in one line.
    //  Useful to create commonly used numbers that don't need to change but need to be referenced

    const float GRAVITY_EARTH = 9.807;//meters per second
    const int PLANET_COUNT = 8;//in our solar system
    const char WHO = 'U';

    //  These consts act like any other variable, but nothing should change them
    //  I think I would like it most if I get to full caps constant variables

    //  What luck, I have found out how to take some input using scanf() function
    //  Lets add 2 ints from user input
    //  scanf() holds its on new line and don't not need to be accounted for at the end

    int user_input_1 = 0;
    int user_input_2 = 0;

    printf("Lets add 2 numbers\nInput an integer: ");
    scanf("%d", &user_input_1);

    printf("Input another integer: ");
    scanf("%d", &user_input_2);

    int input_result = user_input_1 + user_input_2;
    printf("The result of the ints %d + %d is %d\n", user_input_1, user_input_2, input_result);

    /*  Arithmetic
    *   Changing numbers in C involves performing mathematical operations on variables
    *   Some common operation include addition, subtraction, multiplication, division, and the modulus or remainder
    *   add: + , subtract: - , multiplication: * , division: / ,  modulus: %
    */
    int crazy = 8;
    int dos = 2;

    int addition = crazy + dos;
    int substraction = crazy - dos;
    int division = crazy / dos;
    int multiplication = crazy * dos;
    int modulus = crazy % dos;

    printf("A = %d , B = %d\n", crazy, dos);
    printf("A + B = %d\n", addition);
    printf("A - B = %d\n", substraction);
    printf("A / B = %d\n", division);
    printf("A * B = %d\n", multiplication);
    printf("A % B = %d\n", modulus);

    // good job, move on to the next piece of chapter 2
    return 0;
}

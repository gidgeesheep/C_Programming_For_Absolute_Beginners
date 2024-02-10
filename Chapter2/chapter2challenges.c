#include <stdio.h>

int main()
{
    int a = 0; int b = 0; int x = 0; int y = 0;

    void challenge_one()
    {
        a = 5; b = 1; x = 10; y = 5;

        printf("(%d - %d)(%d - %d) = %d\n", a, b, x, y, (a - b)*(x - y));
    }

    void challenge_two()
    {


        printf("Do formula (a - b)*(x - y)\n");
        printf("Enter int for variable A: ");
        scanf("%d", &a);
        printf("Enter int for variable B: ");
        scanf("%d", &b);
        printf("Enter int for variable X: ");
        scanf("%d", &x);
        printf("Enter int for variable Y: ");
        scanf("%d", &y);

        printf("(%d - %d)*(%d - %d) = %d" , a, b, x, y, (a - b)*(x - y));

    }

    void challenge_three()
    {
        char name[] = "\0";

        printf("\nWhat is your name? ");
        scanf("%s",&name);

        printf("Hello %s", name);
    }

    void challenge_four()
    {
        int i_quantity = 0;
        float f_price = 0;

        printf("\nHow many things did you sell? ");
        scanf("%d", &i_quantity);
        printf("How much do they cost? ");
        scanf("%f", &f_price);

        printf("Your profit is $%.2f", i_quantity*f_price);

    }

    void challenge_five()
    {
        float f_rate = 0;
        float f_sales_price = 0;
        float f_cost = 0;
        float f_commission = 0;


        printf("What is your rate per hour? ");
        scanf("%f", &f_rate);
        printf("What is he sales price of the piece? ");
        scanf("%f", &f_sales_price);
        printf("How much is the material cost? ");
        scanf("%f", &f_cost);

        f_commission = f_rate * (f_sales_price - f_cost);

        printf("Your commission will cost $%.2f", f_commission);

        }

    //challenge_one();
    //challenge_two();
    //challenge_three();
    //challenge_four();
    challenge_five();



    return 0;
}

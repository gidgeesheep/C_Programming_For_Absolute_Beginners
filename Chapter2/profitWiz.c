#include <stdio.h>

int main()
{
    //takes input of two ints, of revenue and cost, then spits out a net income in monetary value

    float f_revenue, f_costs;
    f_revenue = 0; f_costs = 0;

    printf("Welcome to Profits Wizard\nLet\'s Calculate your profit\n\n");

    printf("Enter the amount of profit: $");
    scanf("%f", &f_revenue);

    printf("Enter the cost of operating: $");
    scanf("%f", &f_costs);

    float f_profit = f_revenue - f_costs;

    if (f_profit == 69)
    {
        printf("NICE.\n");
    }

    printf("Our net profit is $%.2f", f_profit );
    return 0;
}

#include <stdio.h>
#include <math.h>

/*
Brooks, Elijah
1/31/2019
1412-503
Lab #2

Formula: (40000)/(1+39999(e^-.24681(x)))

Program prompts the user three times to enter a day number and then calculates and displays the number
of cases predicted for each day number entered.

*/

/* prototype function*/

void calculate(int);

/* main function*/
int main(void){
    /* Define user_input*/
    int user_input;
    /* Gather user_input, set user_input to the user's input, call the function*/
    printf("Enter day number>> ");
    scanf("%d", &user_input);
    calculate(user_input);
    /* Repeated*/
    printf("Enter day number>> ");
    scanf("%d", &user_input);
    calculate(user_input);
    /* Repeated*/
    printf("Enter day number>> ");
    scanf("%d", &user_input);
    calculate(user_input);

    return 0;
}
/* Define the function Calculate*/
void calculate(int day){
    /*Break up formula to do the math*/
    int numerator = 40000;
    int p = 39999*exp(-.24681*day)+1;
    /*Calculate the cases*/
    int cases = numerator/p;

    /*Print out the final solution*/
    printf("By day %d, model predicts %d cases total.\n", day, cases);

}


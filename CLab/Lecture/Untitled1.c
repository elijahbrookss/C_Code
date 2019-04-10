 /*

 int a;

 somewhere n memory, there is space to hold an integer value that can be referenced by a.

 a=3;
 printf("%d\n", a);

 In memory, a may be located at hex address 003AFFB4

 at 003AFFB4 3 is stored

 int *b;

 somewhere in memory, there is space to hold a memory address value that can be referenced by b

 Unless I declare an integer or dynamically allocate it, b has nothing to point to.

 Viruses work by injecting code into memory.

 Every parameter of a function is given a different memory address (local storage) when in a run-time stack, so to change anything in the main function, you need to have pointers.
---------------------------------------------------------------------------
Memory address testing
#include <stdio.h>


int main(){

    int a=3;
    int *b = &a;
    int **c = &b;
    printf("%x, is the address of a\n", &a);
    printf("%x, is the address of b\n", &b);
    printf("%x is the value of a\n", **c);
    printf("%x is the address of a\n", *c);
    printf("%x is the address of b\n", c);
    return 0;
}
*/

#include <stdio.h>
#include <math.h>

void calculate(int);

int main(void){
    int user_input;

    printf("Enter day number>> ");
    scanf("%d", &user_input);
    calculate(user_input);

    printf("Enter day number>> ");
    scanf("%d", &user_input);
    calculate(user_input);

    printf("Enter day number>> ");
    scanf("%d", &user_input);
    calculate(user_input);

    return 0;
}

void calculate(int day){
    int numerator = 40000;
    int p = 39999*exp(-.24681*day)+1;
    int cases = numerator/p;
    printf("By day %d, model predicts %d cases total.\n", day, cases);

}


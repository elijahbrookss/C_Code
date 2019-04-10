/*
1)
    a. #include<stdio.h> is a directive.

        These are all the expression statements:
            printf("Parkinson's law : \nWork expands so as to ");
            printf("fill the time\n");
            printf("available for its completion.\n");
            return 0;
    b. The program outputs:
        Parkinson's law :
        Work expands so as to fill the time
        available for its completion.

2) a.

3) d.

4)
    a. printf("%-8.1f", x);
    b. printf("%10.6f", x);
    c. printf("%-8.3d", x);
    d. printf("%6.0d", x);

5)

#include <stdio.h>

int main(){
    float amount;
    printf("Enter a dollar-and-cents amount: ");
    scanf("%f", &amount);

    printf("With tax added: %.2f", (amount*.05)+amount);

    return 0;
}

*/

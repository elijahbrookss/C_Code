#include <stdio.h>

int main(){
    float amount;
    printf("Enter a dollar-and-cents amount: ");
    scanf("%f", &amount);

    printf("With tax added: %.2f", (amount*.05)+amount);

    return 0;
}


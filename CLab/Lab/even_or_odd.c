#include <stdio.h>


int main(){
    int ui = 0;

    while (ui!= -1){
        printf("Enter a number to check: ");
        scanf("%d", &ui);

        if (ui%2) printf("The number is ODD.\n");
        else printf("The number is EVEN.\n");
    }
    printf("You have exited the program!");

return 0;
}

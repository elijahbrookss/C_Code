#include <stdio.h>
#include <stdlib.h>
/*
Elijah Brooks
3/24/2019
Lab #7
*/
/*Function to find recursion*/
int recursion(int num){
    if (num<=1)
        return  1;
    printf("%d x ", num); /*print out num x for each repeat*/
    return num*recursion(num-1);

}

int main(){
    int num; /*variable for user input*/
    printf("Enter an integer between 0 and 9 or -1 to quit -> "); /*Prompt user for input*/
    scanf(" %d", &num);
    while(num!= -1){ /*While num isn't equal to -1, execute suite*/
        if (num>=0&&num<=9){ /*Check if the number is in range*/
            if (num!=0){
                for(int i=0; i<11+(num*4.1); i++)printf("*"); /*Print out the box of '*' */
                printf("\n* %d! = ", num);
                int rec = recursion(num); /*Call the recursion function and store in variable rec*/
                printf("1=%d *\n", rec);
                for(int i=0; i<11+(num*4.1); i++)printf("*"); /*Print out the box of '*' */
            }else{ /*Same process as above, but for if the num is 0. */
                for(int i=0; i<11; i++)printf("*");
                printf("\n* %d! = ", num);
                int rec = recursion(num);
                printf("%d *\n", rec);
                for(int i=0; i<11; i++)printf("*");
            }
        }else{
            printf("Invalid entry"); /*If user's number is not within range print out invalid entry*/
        }
        printf("\nEnter an integer between 0 and 9 or -1 to quit -> "); /*Prompt user for input*/
        scanf(" %d", &num);
    }
    return 0;
}


#include <stdio.h>
#include <mem.h>

/*
    Tyler Sorrels
    Elijah Brooks
    Lab #4
    2/14/2019


*/
int main(){
    int a=3, b=4, c=5; //Set variables for piles
    char name1[100], name2[100]; //Players' names
    char choice; //Choice for pile
    int num = 0; //Amount chosen to remove
    char currentname[100]; //The current player's name
    int turn = 0; // Which turn it is, used to find out whose turn
    /* Ask the players names*/
    printf("What's your name, player1? ");
    scanf(" %s", name1);
    printf("What's your name, player2? ");
    scanf(" %s", name2);

    while (a+b+c!=0){
        /*Switch players' names accordingly*/
        if(turn%2) strcpy(currentname, name2);
        else strcpy(currentname, name1);

        /*Find out amounts*/
        printf("A: %d  B: %d  C: %d \n", a,b,c);
        printf("%s, Choose a pile: ", currentname);
        scanf(" %c", &choice);
        printf("How many to remove from pile %c? ", choice);
        scanf(" %d", &num);

        /*Switch case to see which pile was chose and remove amount from pile*/
        switch(choice){
            case 'A':
                if(num>a){
                    a = 0;
                }else{a=a-num;}

            case 'B':
                if(num>b){
                    b=0;
                }else{b=b-num;}

            case 'C':
                if(num>c){
                    c=0;

                }else{c=c-num;}

        }
        turn++;
    }
    /*Print out the winner of the game*/
    printf("%s, there are no counters left, so you Win!", currentname);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
/*
Elijah Brooks
Isaac Clemens
Lab #7
3/21/2019

**UNFINISHED**


void encrypt(char string[]){
    int ch;
    for(int i =0; i<strlen(string); i++){
        ch = string[i]; /*onvert string to integer*/
        if (ch%2 == 0){
          printf("%c", string[i]); /*print out the even characters*/
        }
    }
    for(int i =0; i<strlen(string); i++){
        ch = string[i];
        if (ch%2 == 1){
          printf("%c", string[i]); /*Print out the odd characters*/
        }
    }
}
int main(){
    char stringArray[99][12]; /*Array to hold the stringArray for all of the messages*/
    char userInput[99]; /*Used to hold the message*/
    char input;
    do{
        printf("Please enter a message: "); /*prompt for input*/
        scanf("%99s", userInput);
        /* for (int i=1; i<5; i++){
            for (int j=0; j<strlen(str1); j++){
                stringArray[i][j] = str1[j];
            }
        }*/
        printf("The encrypted message is: ");
        encrypt(userInput); /*Calls the encryption*/
        printf("\n");
        printf("Do you want to continue(Y/N)? ");

        input = getchar();
    }while(input != 'N'); /*Does loop until input is 'N'*/
}


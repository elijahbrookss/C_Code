#include <stdio.h>
#include <stdlib.h>
/*
Elijah Brooks
Isaac Clemens
Lab #7
3/21/2019

***FINISHED***

*/

void encrypt(char []); /*Function to encrypt code*/
void sort(char [100][100], int); /*Function to sort the messages*/

int main(){
    /*Variables for arrays, input, and counter*/
    char userInput;
    char message[100];
    char stringArray[100][100];
    int counter=0;
    do{
       /*Prompt user for a message and store it in message*/
        printf("Please enter a message: ");
        gets(message);
        encrypt(message);

        for(int i=0;i<strlen(message);i++)stringArray[counter][i] = message[i]; /*Store the message into stringArray*/

        printf("Do you want to continue(Y/N)? "); /*Prompt user for input to continue or not*/
        userInput = getchar();

        while ((getchar())!='\n'); /*Flush the getchar() buffer*/

        counter++; /*Increment counter*/

    }while(userInput!='N'); /*Continue until input is 'N'*/

    printf("The original messages in alphabetical order are: \n"); /*Print out messages*/

    sort(stringArray, counter); /*Call sort function to sort stringArray in alphabetical order*/

    for(int i=0;i<counter;i++)printf("%s\n", stringArray[i]); /*Print the messages in the stringArray*/

    return 0;
}

/*Function to sort stringArray in alphabetical order using ASCII codes.*/
void sort(char stringArray[100][100], int counter){
    char temp[100]; /*Temporary hold for messages*/
    int compare=1; /*Flag*/
    while(compare==1){ /*Continue until there's no more compares*/
        compare =0;
        for(int i=0;i<counter;i++){
            if((i+1)<counter){
                if(tolower(stringArray[i][0])>tolower(stringArray[i+1][0])){ /*If first letter is lower than second using ASCII, switch (Put lowercase for efficiency)*/
                    strcpy(temp, stringArray[i+1]);
                    strcpy(stringArray[i+1], stringArray[i]);
                    strcpy(stringArray[i], temp);
                    compare = 1;
                }
            }
        }
    }
}
void encrypt(char message[]){
    /*If the ASCII number for the character is even, print it out first.*/
    for(int i =0; i<strlen(message); i++){
        if(message[i]%2==0)printf("%c",message[i]);
    }
    /*If the ASCII number for the character is odd, print it out second.*/
    for(int i=0;i<strlen(message);i++){
        if(message[i]%2)printf("%c", message[i]);
    }
    printf("\n");
}

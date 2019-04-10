#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
(a).Write a program that reads a message,
then prints the reversal of the message:
Enter a message: Don�t get mad, get even.
Reversal is: .neve teg ,dam teg t�noD
Hint: Read the message one character at a time(using get char)
 and store the character in an array. Stop reading when
 the array is full,or the character read is �\n�.
*/

void funcA(char [], char []);


int main(){
    char reversed[20];
    printf("Hello World!");
    funcA("Hello!", reversed);
    return 0;
}


void funcA(char string[], char reversed[]){ //a is string 1, b is the new string

    int placement = 0;
    for(int i=strlen(string); string[i] != "\0" && i>strlen(string); --i){

        reversed[placement] = reversed[i];

        placement++;
    }
    printf("%s", reversed[]);


}

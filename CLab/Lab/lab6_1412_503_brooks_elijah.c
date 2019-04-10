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

void funcA(char []);


int main(){
    char string[]="Hello World!";
    funcA(string);
    return 0;
}


void funcA(char string[]){ //a is string 1, b is the new string
    for(int i=strlen(string); i>=strlen(string); --i){
        printf("%c", string[i]);
    }


}


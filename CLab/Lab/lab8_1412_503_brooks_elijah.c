#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*strchr() Pointer to first occurrence of char in a string.*/

/*
Elijah Brooks
1412 - 503
Lab #8
4/1/2019

Write a recursive function that displays all the binary (base 2) numbers
represented by a string of xs, 0s and 1s. The xs represent digits that
can be either 0 or 1. For example, the string 1x0x represents the numbers
1000, 1001, 1100, 1101. The string xx1 represents 001, 011, 101, 111.
*/

void display(char *string){
    char newString1[100], newString2[100], newString[100];/*Three strings,First for a string with x replaced by a 0,Second for a string with x replaced by a 1,Third to clone parameter with.*/
    static char *p; /*create a static variable to hold a pointer for the position of 'x'*/
    strcpy(newString, string); /*Clone string into newString*/
    p = strchr(newString, 'x'); /*Get the position of 'x' in a string*/
    if (p == 0){ /*If x isn't in the string*/
        printf("%s\n", newString); /*print out the binary without x's*/
    }else{
        *p = '0'; /* p holds a slot in memory for the 'x', so dereference it and change to '0'*/
        strcpy(newString1, newString); /* clone newString into newString1*/
        *p = '1'; /* p holds a slot in memory for the 'x', so dereference it and change to '1'*/
        strcpy(newString2, newString); /* Clone newString into newString2*/
        display(newString1); /*Recursion with newString1*/
        display(newString2); /*Recursion with newString2*/
    }
}

int main(){
    display("xxxx");

    return 0;
}

#include <stdio.h>
/*
Elijah Brooks
Lab #5
3/3/2019

*/

void find_two_largest(int a[], int n, int *largest, int *second_largest){
    int compare = 1, temp; /*initiate variables for sorting*/

    while(compare==1){ /*Keep looping until loop compares*/
        compare = 0; /*Hasn't compared yet*/
        for(int i = 0; i<n; ++i){
            if (a[i]>a[i+1]){
                temp = a[i+1]; /*Hold temp, for switching*/
                a[i+1] = a[i]; /*Set the largest value to the smallest value's previous position*/
                a[i] = temp; /*Set smallest value to largest value's previous position*/
                compare = 1; /*Let loop know it compared*/
            }
        }
    }
    *largest = a[n-1]; /*Set largest = to the last element*/
    *second_largest = a[n-2]; /*Set second largest = to the second to last element*/

}

int main(){

    int *tab; /*initiate a pointer for array*/
    int largest, second_largest, amount; /*set variables to hold largest amount, second_largest amount, and the length of array*/

    printf("How many elements do you want in your array?: "); /*Prompt user for elements and set input to amount*/
    scanf(" %d", &amount);

    tab = (int*)calloc(amount, sizeof(int)); /*Allocate memory for array*/

    for(int i = 0; i<amount; i++){ /*Fill up array with user's input values*/
        printf("Enter array element: ");
        scanf(" %d", &tab[i]);
    }

    find_two_largest(tab, amount, &largest, &second_largest); /*Call function passing in table, length, addresses for largest & second_largest*/
    printf("%d is the largest element in your array.\n%d is the second largest in your array.\n", largest, second_largest); /*Print out results*/

    return 0;
}

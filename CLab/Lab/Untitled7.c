



#include <stdio.h>
/*
Elijah Brooks
Lab #5
3/3/2019

*/

void find_two_largest(int a[], int n, int *largest, int *second_largest){
    int compare = 1, temp, swapped; /*initiate variables for sorting*/

   for (int i = 0; i<n-1; i++){
    swapped = 0;
    for(int j = 0;j<n-1-i; j++){
        if (a[j]>a[j+1]){
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            swapped=1;
            printf("Swapped.\n");
        }
    }
    if(!swapped)break;

   }

   for(int i = 0; i<n; i++){
    printf("%d \n", a[i]);
   }
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


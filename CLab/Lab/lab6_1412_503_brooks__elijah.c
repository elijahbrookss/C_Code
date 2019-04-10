#include <stdio.h>
/*
Elijah Brooks
Lab #6
3/7/2019

*/

int main(){
    //prompt user for size of matrix
    int size;
    printf("Enter the size of the matrix: ");
    scanf(" %d", &size);

    int matrixA[size*size], matrixB[size*size], newArray[size*size], iterate; //initialize variables for later use

    //Build the Matrix;
    // For loop to prompt user for input in first matrix.
    for(int i=0; i<size*size; i++){
        printf("Enter elements for first matrix: ");
        scanf("%d", matrixA+i);
    }
    // For loop to prompt user for input in second matrix.
    for(int i=0; i<size*size; i++){
        printf("Enter elements for second matrix: ");
        scanf("%d", matrixB+i);
    }

    iterate = 0; //Used to keep track of which row we're on.
    for(int i = 0; i<=size; i++){
        for(int j=0; j<=size; j++){
            newArray[j+iterate] = *(matrixA + (j+iterate)) + *(matrixB + (j+iterate)); // Addition formula for the newMatrix
        }
        iterate+=size;
    }
    // Used to keep track on which row we're on.
    iterate = 0;
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size; j++){
            printf("%d ", *(newArray + (j+iterate))); //Print out the matrix in a format.
        }
        printf("\n");
        iterate+=size;
    }
    return 0;

}

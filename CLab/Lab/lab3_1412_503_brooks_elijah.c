#include <stdio.h>
/*
Lab #3
Elijah Brooks
2-7-2019
1412-503

Checks if the grams emitted per mile exceeds the permitted level or not
*/
void checkAllowance(double, double); /* prototype function*/
int main(){
    int chem; /* Chemical choice */
    double gpm; /*Variable for Grams emitted per mile*/
    double odometer; /*Variable for odometer*/

    printf("(1) Carbon Monoxide\n(2) Hydrocarbons\n(3) Nitrogen oxides\n(4) Non methane hydrocarbons\n"); /* Format for the prompt*/
    printf("Enter pollutant number >> "); /* Set variable to userinput*/
    scanf("%d", &chem);
    printf("Enter number of grams emitted per mile >> "); /* Set variable to userinput*/
    scanf("%lf", &gpm);
    printf("Enter odometer >> "); /* Set variable to userinput*/
    scanf("%lf", &odometer);

    switch(chem){
        /* A case for each chemical to compare the allowances*/
        case 1:{
            if(odometer<=50000){
                checkAllowance(3.4, gpm);
                break;
            }
            else if(odometer>50000){
                checkAllowance(4.2, gpm);
                break;
            }

        }
        case 2:{
            if(odometer<=50000){
                checkAllowance(0.31, gpm);
                break;
            }
            else if(odometer>50000){
                checkAllowance(0.39, gpm);
                break;
            }

        }
        case 3:{
            if(odometer<=50000){
                checkAllowance(0.4, gpm);
                break;
            }
            else if(odometer>50000){
                checkAllowance(0.5, gpm);
                break;
            }

        }
        case 4:{
            if(odometer<=50000){
                checkAllowance(0.25, gpm);
                break;
            }
            else if(odometer>50000){
                checkAllowance(0.31, gpm);
                break;
            }

        }

        return 0;
    }
}
void checkAllowance(double allowance, double gpm)
{
    if(gpm>allowance) /*if grams permitted is greater than, then it exceeds*/
        printf("Emissions exceed permitted level of %.2f grams/ mile.\n", allowance);
    else if(gpm<=allowance)/* if grams permitted is less than it's within limits*/
        printf("Emissions are within the permitted level of %.2f grams/ mile.\n", allowance);

}

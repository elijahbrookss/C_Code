#include <stdio.h>
/*
Brooks, Elijah
2/17/2019
1412-503
Lab #4

Process:
    Make a program that, when a number is inputted by the user, you will print the
    string corresponding to the number and execute the task. If the input number is 5
    the program should terminate. Otherwise, after every transaction is completed print
    a new line. Program should wait until the user presses any key on the keyboard. After
    a key is pressed, your program will display the menu as above and repeat the process
    above. When a number is not in 1-5, you will ignore the input.

*/

/*Function to check the balance*/
void checkBalance(float MyAccount){
    printf("\nExecute Check balance\nBalance is %.2f\n", MyAccount);
}
/* Function to make the deposit using the pointer to balance*/
void makeDeposit(float *MyAccount){
    printf("\nExecute Make a Deposit\n");
    float add;
    printf("Enter amount to deposit: ");
    scanf("%f", &add);
    *MyAccount += add;
    printf("New Balance is $%.2f\n", *MyAccount);
}
/*Function to make a withdrawal using the pointer to balance*/
void makeWithdrawal(float *MyAccount){
    printf("\nExecute Make a Withdrawal\n");
    float sub;
    printf("Enter an amount to withdrawal: ");
    scanf("%f", &sub);
    *MyAccount -=sub;
    printf("New Balance is $%.2f\n", *MyAccount);
}
/*Function to change the password using the point to password*/
void changePass(int *Password){
    printf("\nExecute Change Password\n");
    int newpass;
    printf("Enter new password: ");
    scanf("%d", &newpass);
    if(newpass>9999999 && newpass<=99999999){
        *Password = newpass;
        printf("New Password is \"%d\"\n", *Password);
    }else {
        printf("Password is not 8 digits\n");
        printf("Password remains \"%d\"\n", *Password);
    }
}
/*Main function to call functions in a loop*/
int main(){
    float MyAccount = 1000.00; /*Balance*/
    float *pMyAccount=&MyAccount; /*Pointer for Balance*/
    int Password = 12345678; /*Password*/
    int *pPassword=&Password;/*Pointer for password*/
    char ui; /*User input*/

    /*While loop that runs until user input isn't equal to '5' */
    while(ui!='5'){
        system("cls");/*Clears the command prompt for fresh start*/

        /*Format the menu choices*/
        printf("\n1) Check balance\n2) Make a Deposit\n3) Make a Withdrawal\n4) Change Password\n5) Exit\n");
        printf("Please type a number from 1 to 5 to select a menu item: ");
        ui = getchar(); /*Set ui to the keypressed*/

        /*If statement to check whether or not the ui is acceptable, if not just rerun the choices*/
        if(ui=='1'||ui=='2'||ui=='3'||ui=='4'){
            switch(ui){
            case '1':
                /*If the ui is '1', call the checkBalance function*/
                printf("\nUser entered %c", ui);
                checkBalance(MyAccount);
                break;
            case '2':
                /*If the ui is '2', call the makeDeposit function*/
                printf("\nUser entered %c", ui);
                makeDeposit(pMyAccount);
                break;
            case '3':
                /*If the ui is '3', call the makeWithdrawal function*/
                printf("\nUser entered %c", ui);
                makeWithdrawal(pMyAccount);
                break;
            case '4':
                /*If the ui is '4', call the changePass function*/
                printf("\nUser entered %c", ui);
                changePass(pPassword);
                break;
            }
            /*Runs after the switch case*/
            /*Requires the user to press and key to continue*/
            printf("\nPress any key to continue your transactions...");
            getchar();
        }
        /*Used to flush the input buffer so that '\n' doesn't get used as input*/
        while ((getchar())!='\n');

     /*Last line for if they enter 5, terminates the program*/
    }printf("\nUser entered 5\nExecute Exit\nTerminating program\nHave a nice day!\n");
}

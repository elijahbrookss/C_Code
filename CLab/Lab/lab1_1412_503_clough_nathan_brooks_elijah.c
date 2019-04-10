#include <stdio.h>

/*
Clough, Nathan
Brooks, Elijah
1/24/2019
1412-503
*/


int main(){

	/*
	Define each of the variables
	*/
   char d_grade;
   float min_grade;
   float cur_grade;
   float average_per;
   float grade_need;
	/*
	Collecting input and assigning input to variables.
	*/
   printf("Enter desired grade: ");
   scanf(" %c", &d_grade);
   printf("Enter minimum average required> ");
   scanf(" %f", &min_grade);
   printf("Enter current average in course> ");
   scanf(" %f", &cur_grade);
   printf("Enter how much the final counts as a percentage of the course grade> ");
   scanf(" %f", &average_per);
	/*
	Calculate grade needed by finding variant and dividing by percentage, and adding to the current grade.
	Print out grade discovered.
	*/
   grade_need = ((min_grade - cur_grade)/(average_per/100)) + cur_grade;
   printf("You need a score of %.2f on the final to get a %c.\n", grade_need, d_grade);

    return(0);
}

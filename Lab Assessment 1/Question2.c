/*
    RMIT University Vietnam
    Course: EEET2601 Engineering Computing 1
    Semester: 2023-3
    Lab Assessment: 1
    Author: Le Pham Gia Vinh
    ID: 3971155
    Compiler used: gcc 13.2.0
    Created date: 25/11/2023
    Acknowledgement: None
*/

#include <stdio.h>

int main() {

    int num, step, sum = 0;
    
    //Prompts user to enter a positive interger
    printf("Enter a positive interger: ");
    scanf("%d", &num);

    //Prompts user to enter a step size
    printf("Enter the step size: ");
    scanf("%d", &step);

    //Prints this once
    printf("\nThe incrementing sequence (up to 50): ");

    //Display sequence
    while ( num <= 50 ) {

        //Prints num and its increment by step
        printf("%d", num);

        //Calculate sum and increase num
        sum = sum + num;
        num = num + step;

        //Inserts ", " if num has another value <= 50
        //This is so that it will not print the "," after the final result of num
        if ( num <= 50 ) {

            printf(", ");

        }

    }
    
    //Prints the sum
    printf("\nTheir sum: %d\n", sum);

    return 0;

}
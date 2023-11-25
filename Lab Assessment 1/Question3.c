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

    int num;

    //Prompts the user to input interger between 1 and 12
    do {

        printf("Enter a number between 1 and 12: ");
        scanf("%d", &num);

    } while ( num > 12 || num < 1 ); //Keep asking if user input invalid value

    //Display sequence
    if ( num % 2 == 0 ) { //If number is even
        
        //Display sequence for even number
        for ( int row = num; row > 0; row-- ) {

            for ( int i = num; i >= row; i-- ) {

                printf("%3d", i); //Print shape

            }

            printf("\n"); //Move to new line

        }
        
    } else { //If number is odd
   
        int row_count = 1; //row counter

        int lim = 1; //lim counter 

        //Display sequence for odd number
        for ( int row = num / 2 + 1; row <= num; row++ ) {

            //Left half (Hollow triangle)
            for ( int i = row; i >= 1; i-- ) {

                //Make it hollow
                if ( i == row_count || i == lim || ( row == num && i >= row_count )) {

                    printf("%3d", i); //Prints the shape

                } else if ( i < row_count ) {

                    /* Do nothing so that it won't affect the right side */

                } else {

                    printf("   "); //Print blank spaces for the hollow part

                }

            }

            //Right half (Triangle)
            for ( int i = row_count + 1; i <= row; i++ ) {

               if ( i <= lim ) {

                    printf("%3d", i); //Prints triangle

               }

            }

            row_count ++; //Increase row counter when finishes with each line

            lim += 2; //Increase the limit on both sides of equilateral

            printf("\n"); //Move to new line

        }

    }

    return 0;

}
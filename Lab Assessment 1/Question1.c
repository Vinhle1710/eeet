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

int main () {
    float bill;
    float discount;
    
    //Prompts user to enter bill
    printf("Enter the total purchase amount ($): ");
    scanf("%f", &bill);

    //Prompts the user to enter discount percentage:
    printf("Discount percentage (%%): ");
    scanf("%f", &discount);

    //Calculate and print final bill
    printf("Final bill after discount($): %.3f", bill - (bill * discount / 100));

    return 0;
}

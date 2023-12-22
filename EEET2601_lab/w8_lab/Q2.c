/*Write a function to determine if a given year is a leap year or not (which has 366 days).
It is known that a year is a leap year if it’s divisible by 400, or if it’s divisible by 4 but
not divisible by 100. Examples for understanding:
• 2000 is a leap year (because it’s divisible by 400)
• 1900 is not a leap year (because it’s divisible by 4 but also divisible by 100)
Test the written function in main(), which ask the user to input the year number and
print out whether it is a leap year or not (don’t need to print out reason).*/

#include <stdio.h>

int leap (int year){
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int year;
    printf("Please enter a year: ");
    scanf("%d", &year);

    if(leap(year)){
        printf("This is a leap year\n");
    } else {
        printf("This is not a leap year\n");
    }

    return 0;
}
/*Write your own version of the C library function int atoi(char *str) which
converts a valid string of digits str to an integer value and returns it. If no valid
conversion could be performed, the function returns zero. Assume that the string only
contains digits (not include sign symbols)*/

#include <stdio.h>
#include <ctype.h>

#define STRSIZE 100

int atoi(const char *str){
    int num = 0;
    for (int i = 0; str[i] != '\0'; i++){
        //Get value of each digit and put in num
        if ( isdigit(str[i]) ){
            num = num*10 + (str[i] - '0');
        } else {
            return 0; //found invalid non-digit character
        }
    } 
    return num;
}


int main() {
    char str[STRSIZE];
    printf("Input a string of only digits: ");
    scanf("%s", str); 

    printf("Converted value: %d\n", atoi(str));
    return 0;
}
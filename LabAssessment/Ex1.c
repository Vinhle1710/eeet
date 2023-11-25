/*
  RMIT University Vietnam
  Course: EEET2601 Engineering Computing 1
  Semester: 2023-2
  Lab Assessment: 1
  Author: Le Pham Gia Vinh
  ID: 3971155
  Compiler used: gcc 8.1.0
  Created  date: 24/11/2023
  Acknowledgement: AsciiTable.com
*/

#include <stdio.h>

int main(){
    char c;

    //Prompt user to enter an alphanumerical character
    printf("Enter an alphanumberical character: ");
    scanf("%c", &c);

    if ( c >= 48  &&  c <= 57 )
    {
        printf("It is a numerical character\n");
    } else if ( c >= 97  &&  c <= 122 )
    {
        printf("It is a lowercase alphabetical character\n");
        c = c - 32;
        printf("> Converterted characters: %c\n", c);   
    } else if ( c >= 65  &&  c <= 90 )
    {
        printf("It is a UPPERCASE alphabetical character\n");
        c = c + 32;
        printf("> Converterted characters: %c\n", c);
    } else 
    {
        printf("Invalid character\n");
    }
    return 0;
}
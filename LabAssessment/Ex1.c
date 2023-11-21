#include <stdio.h>

int main(){
    char c;

    //Prompt user to enter an alphanumerical character
    printf("Enter an alphanumberical character: ");
    scanf("%c",&c);

    //print if entered an number
    if (c>=48 && c<=57){
        printf("It is a numerical character\n");

    //print if entered lower case character
    } else if (c>=97 && c<=122){
        printf("It is a lowercase alphabetical character\n");
        
        //convert to upper case
        c = c - 32;
        printf("> Converterted characters: %c\n", c);

    // print if entered upper case character    
    } else if (c>=65 && c<=90){
        printf("It is a UPPERCASE alphabetical character\n");
        
        //convert to lower case
        c = c + 32;
        printf("> Converterted characters: %c\n", c);

    //print if not entered alphanumeric character
    } else {
        printf("Invalid character\n");
    }
    return 0;
}
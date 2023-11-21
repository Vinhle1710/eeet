#include <stdio.h>

int main(){
    char c;
    printf("Enter an alphanumberical character: ");
    scanf("%c",&c);
    if (c>=48 && c<=57)
    {
        printf("It is a numerical character\n");
    } else if (c>=97 && c<=122){
        printf("It is a lowercase alphabetical character\n");
        c = c - 32;
        printf("> Converterted characters: %c\n", c);
    } else if (c>=65 && c<=90){
        printf("It is a UPPERCASE alphabetical character\n");
        c = c + 32;
        printf("> Converterted characters: %c\n", c);
    } else {
        printf("Invalid character\n");
    }
    return 0;
}
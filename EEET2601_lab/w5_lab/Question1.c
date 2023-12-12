#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100

int main() {
    char str[SIZE]; //store maximum 99 characters

    printf("Enter string: ");
    scanf("%[^\n]s", str);
    
    int count = 0;
    int sum = 0;

    for (int i = 0; str[i] != '\0'; i++){
        if ( isalpha(str[i]) ) {

            count ++; 
            
            if ( islower(str[i]) )
            {

                str[i] = toupper(str[i]);

            } else {

                str[i] = tolower(str[i]);

            }
            
        } else if ( isdigit (str[i]) ) {

            sum += (str[i] - 48) ;

        }

        for (int j = 1; i < count; i++)
        {
            /* code */
        }
        
    }

    printf("Number of alphabet characters: %d \n", count);
    printf("Converted string: %s\n", str);
    printf("Sum of digits: %d \n", sum);

    return 0;
}
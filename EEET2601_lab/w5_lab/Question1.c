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
            
            // if ( islower(str[i]) )
            // {

            //     str[i] = toupper(str[i]);

            // } else {

            //     str[i] = tolower(str[i]);

            // }

            str[i] = islower(str[i]) ?      toupper(str[i])    :    tolower(str[i]);
        //     condition             ?   do if condition true  :  do if condition false
            
        } else if ( isdigit (str[i]) ) {

            sum += (str[i] - 48) ;

        }
        
    }


    printf("Number of alphabet characters: %d \n", count);
    printf("Converted string: %s\n", str);
    printf("Sum of digits: %d \n", sum);

    int length = strlen(str);

    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    
    int last = length - 1;

    for (int first = 0; first < last; first++, last--)
    {
        int temp = str [first];
        str[first] = str[last];
        str[last] = temp;
    }
    

    printf("Reverse string: %s\n", str);
    

    return 0;
}
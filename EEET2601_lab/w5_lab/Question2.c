#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100

int main (){

    char str[SIZE];
    int count;

    printf("Enter string: ");
    scanf("%[^\n]s", str);
    
    int length = strlen(str);

    for (int i = 0; i <= length; i++)
    {
        if ( isalpha( str[i] ) && isspace( str[i-1] ) || i == 0 && isalpha(str[i]))
        {
            count ++;
        }
        
    }
    
    printf ("%d\n", count);
    return 0;

}
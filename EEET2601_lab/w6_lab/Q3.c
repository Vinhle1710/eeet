/*Write a program to ask the user to input a string, which may contain spaces then do the
following tasks,

a) Replace the lowercase characters by uppercase and vice versa. You are required to use
pointer in the loop.

b) Ask the user to enter another string, a searching keyword, and text for replacement.
Print out the string after replacement.

Example run:
Enter a string: Good afternoon
Find: oo
Replace with: 00
Result: G00d aftern00n
Note: Find and Replacement texts are strings which can contain of space characters. You
can assume that they have the same length.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>



int main(){

    #if 0
    char str[100];
    printf("Please enter a string: \n");
    scanf(" %[^\n]s", str);
    printf("Entered string: %s\n", str);
    char *p = str;

    //a) Replace the lowercase characters by uppercase and vice versa. You are required to use pointer in the loop.
    for (int i = 0; str[i] != '\0'; i++)
    {
        *(p + i) = islower(*(p + i) ) ?      toupper( *(p + i) )    :    tolower( *(p + i) );

        /*if ( islower(*(p + i) ) )
        {
            *(p + i) = toupper( *(p + i) );

        } 
        else if (isupper(*(p + i) ) )
        {
            *(p + i) = tolower( *(p + i) );    
        }*/

    }

    printf("%s\n", str);
    #endif

    //b) Ask the user to enter another string, a searching keyword, and text for replacement. Print out the string after replacement.

    char str2[100];
    char strSearch[100];
    char strReplace[100];

    printf("Please enter another string: \n");
    scanf(" %[^\n]s", str2);
    printf("Entered string: %s\n", str2);

    printf("Please enter searching keyword string: \n");
    scanf(" %[^\n]s", strSearch);
    printf("Entered keyword: %s\n", strSearch);

    printf("Please enter replacement string: \n");
    scanf(" %[^\n]s", strReplace);
    printf("Entered replacement: %s\n", strReplace);

    char *pos, temp[1000];
    int index, owlen = strlen(strSearch);
    

    while ((pos = strstr(str2, strSearch)) != NULL) {
        // Bakup current line
        strcpy(temp, str2);
 
        // Index of current found word
        index = pos - str2;

        printf("%s\n", pos);
 
        // Terminate str after word found index
        str2[index] = '\0';
 
        // Concatenate str with new word
        strcat(str2, strReplace);
 
        // Concatenate str with remaining words after
        // oldword found index.
        strcat(str2, temp + index + owlen);
    }

    printf("New string: %s\n", str2);

    return 0;
}
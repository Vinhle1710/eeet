/* Write a program to input a string, which may contain spaces, and modify that string with
character substitution as below then print out result:
“$" for "s", "@" for "a," "1" for "l", “0” for “O” */

#include <string.h>
#include <stdio.h>
#include <ctype.h>

void replace(char *s)
{
    //Run through the string
	for (int i = 0; i < strlen(s); i++)
    {
        //Replacing s with $
        if (s[i] == 's' || s[i] == 'S')
        {
            s[i] = '$';
        } 
        
        //Replacing a with @
        else if (s[i] == 'a' || s[i] == 'A')
        {
            s[i] = '@';
        } 

        //Replacing i with 1
        else if (s[i] == 'l' || s[i] == 'L') 
        {
            s[i] = '1';
        } 
        
        //Replacing o with 0
        else if (s[i] == 'o' || s[i] == 'O') 
        {
            s[i] = '0';
        }
    }
  
}

int main(){
    //Define string with 99 characters
    char str[100]; 

    //Prompts users to enter a string
    printf("Enter a string: ");
    scanf(" %[^\n]s", str);

    replace(str);

    //Prints out the modified string
    printf("Result: %s", str);

    return 0; 
}
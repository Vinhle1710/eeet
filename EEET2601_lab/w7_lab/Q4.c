/*Write a function that accept a text and a searching keyword (both are string), return 1 if
the keyword is found in the text and 0 otherwise. Can you do this exercise without using
any built-in string function ?*/

#include <stdio.h>

int check (char string[], char key[]) {
    for (int i = 0; string[i] != '\0'; i++)
    {   
        int j = 0;
        while (string[i] == key[j])
        {
            i++;
            j++;

            if (key[j] == '\0')
            {
                return 1;
            }
            
        }
        
    }
    return 0;
}

int main() {
    char text[50], keyword[50];
    printf("Enter a string: ");
    scanf(" %[^\n]s", text);

    printf("Enter a searching keyword: ");
    scanf(" %[^\n]s", keyword);

    if (check(text, keyword))
    {
        printf(" '%s' is found in the text", keyword);
    } else {
        printf(" '%s' is NOT found in the text", keyword);
    }
    return 0;
}
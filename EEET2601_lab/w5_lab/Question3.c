#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100

int main(){
    char name [4][SIZE];

    for (int i = 0; i < 4; i++)
    {
        printf("Enter full name %d: ", i+1);
        scanf(" %[^\n]s", name[i]);
    }

    // printf("The first names are: ");

    // for (int i = 0; i < SIZE; i++)
    // {
    //     for (int j = 0; j < strlen(name[4]); j++)
    //     {
    //         if ( isalpha( name[i][j] ) )
    //         {
    //             printf("%s", name[i][j]);
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
        
    // }
    
}
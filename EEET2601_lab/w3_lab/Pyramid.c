/*Prompt the user to enter an integer between 1 and 15. Assume that the user always enters
valid value. Display a pyramid pattern accordingly*/

#include <stdio.h>

int main(){
    int num, a, b, c;
    printf("Enter a number between 1 and 15: ");
    scanf("%d",&num);
    for ( a = 1; a < num; a++)
    {
        printf("   ");
        for(b = 1; b < num -a ; b++){
            printf("%2d", a);
            
        }
        printf("\n");
    }
    
}
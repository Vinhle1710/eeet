/*Prompt the user to enter an integer between 1 and 15. Assume that the user always enters
valid value. Display a pyramid pattern accordingly*/


#include <stdio.h>
int main () {
    int num = 0;
    while (num < 1 || num > 15){
        printf("Enter an integer between 1 and 15:");
        scanf("%d", &num);
    }
    for (int r = 1; r <= num; r++){
        for (int i = 0; i <= num - r; i++){
            printf("   ");
        }
        for (int i = r; i >= 1; i--){
            printf("%2d ", i);
        }
        for (int i = 2; i <= r; i++){
            printf("%2d ", i);
        }
        printf("\n");
    }
}
/*Prompt the user to enter an integer between 1 and 15. Assume that the user always enters
valid value. Display a pyramid pattern accordingly*/

#include <stdio.h>

int main(){
    int num, a, b, c;
    printf("Enter a number between 1 and 15: ");
    scanf("%d",&num);
    
  for (int i = 1; i <= num; i++) {
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }

    // for (int i = 0; i <= num; i++){
    //     for(a = 1; a <= num - i; a++){

    //     }
    // }
    // for (int i = 0; i < num - i; i++)
    // {
    //     /* code */
    // }
    
    
}
/*Use loop statements to print a multiplication table nicely*/

#include <stdio.h>
int main(){
    
    printf("  x |");
    for (int i = 1; i <= 10; i++)
    {
        printf(" %4d", i);
    }
    printf("\n");
    for (int i = 0; i < 55; i++)
    {
        printf("-");
    }
    printf("\n");
    for (int i = 1; i <= 10; i++){
        printf("%3d |", i);
        for (int a = 1; a <= 10; a++){
            printf(" % 4d", a*i);
            if (a == 10){
                printf("\n");
            }
        }
    }
    return 0;
}
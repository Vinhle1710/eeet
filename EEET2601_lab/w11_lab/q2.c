#include <stdio.h>

int main(){
    int num = 0;
    while (num < 1 || num > 10)
    {
        printf("Enter a number (1 - 10): ");
        scanf(" %d", &num);
        if (num < 1 || num > 10)
        {
            printf("Invalid Number !\n");
        }
    }

    printf(" x |");
    for (int i = 1; i <= num; i++)
    {
        printf(" %3d", i);
    }
    
    printf("\n");

    for (int i = 0; i < num*3.9; i++)
    {
        printf("-");
    }
    
    printf("\n");

    for (int i = 1; i <= num; i++)
    {
        printf("%2d |", i);
        for (int j = 1; j <= num; j++)
        {
            printf(" %3d", i * j);
        }
        printf("\n");
    }
    

    return 0;
}
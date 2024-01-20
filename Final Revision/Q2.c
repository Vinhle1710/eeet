#include <stdio.h>

int main() {
    int num;

    while ( num < 1 || num > 10)
    {
        printf("Enter a number (1-10): ");
        scanf("%d", &num);
        if ( num < 1 || num > 10)
        {
            printf("Invalid number !\n");
        }
    }
    printf(" x |");
    for (int i = 1; i <= num; i++)
    {
        printf("%3d ", i);
    }

    printf("\n");

    printf("-");
    for (int i = 0; i <= num; i++)
    {
        printf("----");
    }
    printf("\n");

    for (int i = 1; i <= num; i++)
    {   
        printf("%2d |", i);

        for (int j = 1; j <= num; j++)
        {
            printf("%3d ", j * i);
        }
        printf("\n");
    }
    
    return 0;
}
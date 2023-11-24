#include <stdio.h>

int main(){
    int num;

    // prompr user to enter an interger between 0 - 15
    do
    {
        printf("Enter a number (1 - 15): ");
        scanf("%d",&num);
        if (num > 15 || num < 1)
        {
            printf("Invalid Number\n");
        }
        
    } while (num > 15 || num < 1);

    //Print first line
    for (int i = 1; i <= num; i++)
    {
        printf("%3d ", i);
    }
    printf("\n");

    //print the rest
    for (int r = 2; r <= num; r++)
    {
        for (int j = r; j > 0; j--)
        {
            printf("%3d ", j);
        }

        for (int i = 2; i <= num + 1 - r; i++)
        {
            if (i == num + 1 - r)
            {
                printf("%3d ", i);
            } else {
                printf("    ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
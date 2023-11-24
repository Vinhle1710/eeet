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
    for (int row = 2; row <= num; row++)
    {
        for (int j = row; j > 0; j--)
        {
            printf("%3d ", j);
        }

        for (int i = 2; i <= num + 1 - row; i++)
        {
            if (i == num + 1 - row)
            {
                printf("%3d ", i);
            } else {
                printf("    ",i);
            }
        }
        printf("\n");
    }
    
    return 0;
}
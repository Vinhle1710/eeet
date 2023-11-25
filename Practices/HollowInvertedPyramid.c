/*EXAMPLE: Hollow Pyramid
    n = 9

            1
          1   3
        1       5
      1           7
    1 2 3 4 5 6 7 8 9

*/

#include <stdio.h>

int main (){
    int num;

    //Prompt the user to enters an odd interger between 1 and 10
    do
    {
        printf("Enter an interger between 1 and 10: ");
        scanf("%d", &num);

        if (num > 10 || num < 1 || num % 2 == 0)
        {
            printf("Invalid value\n");
        }
        
    } while (num > 10 || num < 1 || num % 2 == 0);

    //Print pattern
    int incree = 1;
    for (int row = 0; row <= num / 2 ; row++)
    {   
        //Print blank space
        for (int i = 0; i < num - row; i++)
        {
                printf("   ");
        }

        //Print Triangle
        for (int i = 1; i <= num; i++)
        {
            //Make it hollow
            if (i == row + incree || i == 1 || row == num/2) 
            {
                printf("%3d", i);
                
            } else 
            {
                printf("   ");
            }
        }
        incree++;
        printf("\n");
    }
    return 0;
}
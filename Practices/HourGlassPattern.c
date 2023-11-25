/*EXAMPLE: Hour Glass
    num = 5

   5    4    3    2    1    2    3    4    5
        4    3    2    1    2    3    4
             3    2    1    2    3
                  2    1    2
                       1
                  2    1    2
             3    2    1    2    3
        4    3    2    1    2    3    4
   5    4    3    2    1    2    3    4    5

*/
#include <stdio.h>

int main(){
    int num;

    //Prompt the user to enters an interger between 1 and 10
    do
    {
        printf("Enter an interger between 1 and 10: ");
        scanf("%d", &num);

        if (num > 10 || num < 1)
        {
            printf("Invalid value\n");
        }
        
    } while (num > 10 || num < 1);

    //Top inverse pyramid
    int incre = 0;
    for (int row = 1; row <= num; row++)
    {
        for (int i = num; i > 0; i--)
        {
            if (i <= num - incre)
            {
                printf(" %3d ",i);
            } else 
            {
                printf("     ");
            }
        }

        for (int i = 2; i <= num; i++)
        {
            if (i <= num - incre)
            {
                printf(" %3d ",i);
            } else
            {
                printf("     ");
            }
        }
            
        incre++;
        printf("\n");
    }
    
    //Print the lower half of the hourglass
    //int decree = num - 2;
    for (int row = 2; row <= num; row++)
    {
        for (int i = num; i > 1; i--)
        {
            if (i <= row) // if (i <= num - decree)
            {
                printf(" %3d ", i);
            } else
            {
                printf("     ");
            }
            
        }
        
        
        for (int i = 1; i <= num; i++)
        {
            if (i <= row) // if (i <= num - decree)
            {
                printf(" %3d ", i);
            } else
            {
                printf("     ");
            }
        }
        //decree--;
        printf("\n");
    }

    return 0;
}
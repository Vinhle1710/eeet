/*EXAMPLE: Half Rectangular 
    num = 5

   1    2    3    4    5 
   2    1              4 
   3    2    1         3      
   4    3    2    1    2
   5    4    3    2    1

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
    
    //Print first line
    for (int i = 1; i <= num; i++)
    {
        printf (" %3d ", i);
    }

    printf("\n"); //Proceed to 2nd line

    //The rest:
    int incre = 1; //Increase this for every time moving to new line
    for (int row = 2; row <= num; row++)
    {
        //Print the triangle on the left
        for (int i = row; i > 0; i--)
        {
            printf(" %3d ", i);
        }
        
        //Print the column on the right
        for (int i = 2; i < num ; i++)
        {
            // Only printing out i when i == num-- (num-- everytime moving to new line)
            if (i == num - incre) 
            {
                printf(" %3d ", i);
            } else {
                printf("     ");
            }
        }
        
        incre++; 
        printf("\n");
    }
    return 0;
}
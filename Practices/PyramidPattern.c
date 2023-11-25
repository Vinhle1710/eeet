/*EXAMPLE: Pyramid
    num = 5

              1
           2  1  2
        3  2  1  2  3      
     4  3  2  1  2  3  4   
  5  4  3  2  1  2  3  4  5

*/
#include <stdio.h>

int main(){
    int num;

    //Prompt the user to enter an interger between 1 and 15
    do
    { 
        printf("Enter an interger between 1 and 15: ");
        scanf("%d", &num);
        if (num > 15 || num < 1)
        {
            printf("Invalid value\n");
        }
        
    } while (num > 15 || num < 1);

    //Print pyramid
    for (int i = 0; i <= num; i++)
    {
        for (int j = num; j > 0; j--)
        {
            if (j <= i)
            {
                printf("%3d", j);
            } else {
                printf("   ");
            }
        }

        for (int r = 2; r <= num; r++)
        {
            if (r <= i)
            {
                printf("%3d", r);
            } else {
                printf("   ");
            }
            
        }
        
        printf("\n");
    }
    

    return 0;
}

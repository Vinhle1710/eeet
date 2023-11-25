/*EXAMPLE: Pascal's Triangle
    row = 10

                    1
                  1   1
                1   2   1
              1   3   3   1
            1   4   6   4   1
          1   5  10  10   5   1
        1   6  15  20  15   6   1
      1   7  21  35  35  21   7   1
    1   8  28  56  70  56  28   8   1
  1   9  36  84 126 126  84  36   9   1
  
  */
#include <stdio.h>

int main(){
    int row;
    do
    {
        printf("Please enter a number of rows between 0 and 10: ");
        scanf("%d", &row);
        if (row < 0 || row > 10)
        {
            printf("Invalid Value\n");
        }
        
    } while (row < 0 || row > 10); 
  
    // outer loop for row 
    for (int i = 1; i <= row; i++) { 
  
        // inner loop 1 for leading white spaces 
        for (int j = 0; j < row - i; j++) { 
            printf("  "); 
        } 
    
        int C = 1; // coefficient 
  
        // inner loop 2 for printing rowbers 
        for (int k = 1; k <= i; k++) { 
            printf("%3d ", C); 
            C = C * (i - k) / k; 
        } 
        printf("\n"); 
    } 
    return 0; 

}
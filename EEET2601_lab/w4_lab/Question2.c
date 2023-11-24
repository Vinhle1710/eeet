// Question 2
// a) Create an array of 4 integers. Ask the user to enter values for them.
// b) Print the last to the first element of the array in one line.
// c) Print out elements which are even values.
// d) Sort the array in ascending order using the selection sort algorithm then print the array.

#include <stdio.h>

int main(){
    // a)
    // Create array of 4 intergers
    int arr[4];

    //Ask the user to enter values for them
    for (int i = 0; i < 4; i++)
    {
        printf("Please enter the %d value: ", i + 1);
        scanf("%d",&arr[i]);
    }

    // b) 
    printf("The last to the first element are: ");
    //print the last to the first element in one line
    for (int i = 3; i >= 0; i--)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");

    // c)
    printf("Even elements are: ");

    //loop thru array
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] % 2 == 0) // Get even values
        {
            printf(" %d ", arr[i]);
        }
    }
    printf("\n");
  
    // d) 
    
    //Sort the array in ascending order 
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[i])
            {
                int temp = arr[j]; 
                arr [j] = arr[i];
                arr [i] = temp;
            }
        }
    }

    //print out the array
    for (int i = 0; i < 4; i++)
    {
        printf(" %d ", arr[i]);
    }

    return 0;
}


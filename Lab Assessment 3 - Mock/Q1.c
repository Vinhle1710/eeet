/*Ask the user to input a positive number n. Create an array of 10 integers with values are random numbers from 0
to n inclusively. Print out all elements, the average values of the first and second halves of the array.
Note: the first half and second half of the array is respectively the first 5 elements and the last 5 elements.
Assume that the user always inputs valid number.
Sample Run
Enter a number: 100
Array values: 77 68 58 39 69 74 70 95 71 87
Average value of the first and second halves: 62.2 79.4*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    int arr[10];
    srand(time(NULL));

    printf("Array values: ");
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % (n + 1);
        printf("%d ", arr[i]); 
    }
    
    float sum1st = 0, sum2nd = 0;
    
    for (int i = 0; i < 10 / 2; i++)
    {
        sum1st += arr[i];
    }

    for (int i = 9; i > 4; i--)
    {
        sum2nd += arr[i];
    }

    printf("\nAverage value of the first and second halves: %.1f, %.1f\n", sum1st / 5, sum2nd / 5);
    
    return 0;
}
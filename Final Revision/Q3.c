/*Ask the user to input a positive number n. Create an array of 10 integers with values are random
numbers from 0 to n inclusively, then print out their smallest and largest values.
Assume that the user always inputs valid number*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 10

int maxNum(int* arr){
    int max = arr[0];
    for (size_t i = 0; i < SIZE; i++)
    {
        if ( arr[i] > max )
        {
            max = arr[i];
        }
        
    }
    return max;
}

int minNum(int* arr){
    int min = arr[0];
    for (size_t i = 0; i < SIZE; i++)
    {
        if ( arr[i] < min )
        {
            min = arr[i];
        }
        
    }
    return min;
}

int main(){ 
    int num, arr[SIZE];
    srand(time(NULL));
    
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % (num + 1);
    }
    
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nMax value: %d\nMin value: %d", maxNum(arr), minNum(arr));

}
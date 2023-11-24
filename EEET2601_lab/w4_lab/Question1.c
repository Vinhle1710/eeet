#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 5

int main(){
    int arr[SIZE];

    // a) Create an array of 5 random integers between 30 and 100 inclusively.

    //Initialize random number generator
    srand (time NULL);

    //plug 5 random intergers into arr
    for (int i = 0; i < SIZE; i++)
    {
        //get value from 30 to 100
        arr[i] = rand() % 71 + 30; // % 71 to get the values from 0-70 | and | + 30 to make it 30-100
    }
    
    // b) Print the first to the last element of the array in one line, and also count how many elements are greater than 50.
    
    int count = 0;
    printf("The elements in this array are:\n");

    //print all elements of array arr[SIZE] 
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %d ", arr[i]);

        //count number of elements that are > 50
        if (arr[i] > 50)
        {
            count++;
        }   
    }
    printf("Number of elements > 50 is: %3d\n", count);
    

    // c) What is the smallest element in the array (without sorting)?

    int min = arr[0];
    
    //Goes thru the array to find the smallest value
    for (int i = 0; i < SIZE; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    //Print out the smallest element
    printf("The smallest element is: %d \n", min);

    return 0;
}

/*Write a function for each of the following and test by calling them in main().
It is required to have user-friendly messages when presenting the outputs of your programs.

a. Accept an array of integers and its size then return the minimum element in that array.

b. Accept an array of integers and its size then return their average value with two digits of
precision (after decimal point). Required to use pointer in this question.

c. Accept an array of integers and its size then print out the first half of the array (excluding the
middle element if there is odd number of elements). Required to use pointer in this question.

d. Accept an array of integers, its size, and another number. Find the closet element with that
number (which has minimum difference) within the array.

Hint: the difference between a and b is abs(a - b). Include <stdlib.h> library to use abs function*/


#include <stdio.h>
#include <stdlib.h>

//Function to find minimum value
int min(int arr[], int size){

    //Define min = first value
    int min = arr [0]; 

    //
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        
    }

    return min;
}

float average (int arr[], int size){

    //Define sum of all number in array
    float sum = 0;

    //Calculate the sum
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    //Return the average
    return (sum / size);
}

void halfarr(int *arr, int size){
    int *p = arr;
    printf("The first half of the array is: ");
    for (int i = 0; i < size / 2; i++)
    {
        printf("%d ", *(p + i));
    }
    printf("\n");
}

int closestElement(int arr[], int size, int num){
    int minDif =  abs(arr[0] - num);
    int closestVal = 0;
    for (int i = 0; i < size; i++)
    {
        if (minDif > abs(arr[i] - num))
        {
            minDif = abs(arr[i] - num);
            closestVal = arr[i];
        }
    }
    return closestVal;
}

int main(){
    int size;
    printf("Please enter the size of your array: ");
    scanf("%d", &size);

    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf("Please enter the %d value of the array: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Your array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    int num;
    printf("Please enter a number to find the closest number in the array: ");
    scanf("%d", &num);

    printf("The minimum value is: %d\n", min(array, size));
    printf("The average value is: %.2f\n", average(array, size));
    halfarr(array, size);
    printf("The value closest to %d is: %d", num, closestElement(array, size, num));

    return 0;
}
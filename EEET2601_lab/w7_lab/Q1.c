#include <stdio.h>

    
//Qa. Define a function to print all array elements
void print_array(int array[], int size) {
    printf("All elements in normal order: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

//Qb. Accept an array of integers and its size then print the array elements in reverse order.
void print_reverse(int array[], int size){
    printf("All element in reverse order: \n");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

//Qc. Accept an array of integers and its size then return the maximum element in that array
int maximum(int array[], int size){
    int max = array[0];
    for (int i = 0; i < size; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    return (max);
}

//Accept an array of integers, its size, and another integer. Return 1 if the integer is found in the array and 0 otherwise
void find_value(int array[], int num){
    for (int i = 0; i < size; i++)
    {
        /* code */
    }
    
}

int main(){
    //Declare and initialize the array
    int arr[] = {10, 8, 24, 8, 36};
    const int SIZE = sizeof(arr)/sizeof(arr[0]);
    //Call function (array is pass by ADDRESS as a pointer)
    print_array(arr, SIZE);
    print_reverse(arr, SIZE);
    int max = maximum(arr, SIZE);
    printf("Maximum value is: %d \n", max);
    return 0;
}
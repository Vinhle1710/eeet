/*Assume that we have an array like below
char arr[] = {'R', 'M', 'I', 'T', 'U', 'n', 'i', 'v', 'e', 'r', 's', 'i', 't', 'y'};
Sort the array in ascending order then print out the array.*/

#include <stdio.h>

int main(){

    // Given array:
    char arr[] = {'R', 'M', 'I', 'T', 'U', 'n', 'i', 'v', 'e', 'r', 's', 'i', 't', 'y'};

    // Sort in ascending order
    for (int i = 0; i < sizeof(arr); i++)
    {
        for (int j = 0; j< i; j++)
        {
            if (arr[j] > arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }   
        }
    }

    // Print array
    for (int i = 0; i < 14; i++)
    {
        printf(" %c ", arr[i]);
    }
    return 0;
}
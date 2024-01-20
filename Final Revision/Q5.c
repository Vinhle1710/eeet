/*Write a recursive function that takes an array of integers and its size, then returns the sum
of all elements*/

#include <stdio.h>

int sumOf(int arr[], int size) {
    if (size == 0) {
        return 0;
    }
    return arr[size - 1] + sumOf(arr, size - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d", sumOf(arr, size));
}
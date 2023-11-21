#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

int main(){
    int arr[SIZE];

    srand(time(NULL)); //Initialize the random number generator

    for (int i = 0; i < SIZE; i ++){
        arr[i] = rand() % 100;
    }

    printf("The numbers in this array are: ");

    for (int i = 0; i < SIZE; i ++){
        printf("%d  ", arr[i]);
    }
    
    return 0;
}

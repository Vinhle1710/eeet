/*Recursive Functions
a) Write a function which returns the sum of all integers from 1 to n using recursion.
b) Write a function which returns the sum of digits of a positive integer n using
recursion.
c) Write a function which prints out the digits of a positive integer n using recursion. For
example, with n = 7258 the program will print out 7 2 5 8.
d) Write a function which prints out all elements (from first to last) of an integer array
using recursion*/

#include <stdio.h>

// a) Write a function which returns the sum of all integers from 1 to n using recursion.
int sumOfInterger(int num){
    if (num == 1){
        return 1;
    }
    return num + sumOfInterger(num - 1);
}

//b) Write a function which returns the sum of digits of a positive integer n using recursion.
int SumOfDigits(int num){
    if (num < 10){
        return num;
    }
    return SumOfDigits(num / 10) + num % 10;
}

//c) Write a function which prints out the digits of a positive integer n using recursion. For example, with n = 7258 the program will print out 7 2 5 8.
void printDigit(int num){
    if (num < 10){
        printf("%d ", num);
        return;
    }
    printDigit(num / 10);
    printf("%d ", num % 10);
}

// d) Write a function which prints out all elements (from first to last) of an integer array using recursion*/
#if 1
int arrayPrnt(int arr[], int size, int count){
    if (count == size - 1)
    {
        printf("%d ", arr[count]);
        return 1;
    }
    printf("%d ", arr[count]);

    return arrayPrnt(arr, size, count + 1);
}

#else

void arrayPrnt(int arr[], int size){
    if (size == 0)
    {
        return;
    }
    arrayPrnt(arr, size - 1);
    printf("%d ", arr[size - 1]);
}

#endif


int main(){

    int num;
    scanf("%d", &num);
    printf("Sum from 1 to %d is: %d\n", num, sumOfInterger(num));
    printf("Sum of all interger in %d is: %d\n", num, SumOfDigits(num));
    printDigit(num);
    printf("\n");

    int array[7] = {1, 2, 3, 4, 52, 12, 41};
    int size = 7;
    
    #if 1
    arrayPrnt(array, size, 0);
    #else
    arrayPrnt(array, size);
    #endif

    return 0;
}
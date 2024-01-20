/*Write a function for each of the following and test by calling them in main(). You can create string/array
with predefined values in main() to test.
a) Accept a string and return number of alphabetical characters (a-z, A-Z) in that string.
For example, input string is "12hello 34abc" will return value 8
b) Accept a string and return average value of all digits in that string.
For example, input string is "12hello 34abc" will return value 2.5
c) Accept a string which consist of only digits and return its value using recursion.
For example, input string is "2539" will return integer value 2539
d) Accept two arrays namely arr1, arr2 with their sizes size1, size2, and return 1 if all elements of
arr1 are found in arr2, return 0 otherwise.
For example, arr1[] = {1, 3, 6, 2, 3}, arr2[] = {1, 3, 2, 6} → return 1;*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int alphacount(char* str) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if ( isalpha( str[i] ) )
        {
            count ++;
        }
        
    }
    return count;
}

float averageOfDigit(char* str){
    float count = 0, sum = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if ( isdigit( str[i] ) )
        {
            count ++;
            sum += str[i] - '0';
        }
        
    }
    return (sum / count);
}

int returnValue(char* str) {
    if (strlen(str) == 1)
    {
        return str[0] - '0';
    }

    char temp[strlen(str) + 1];
    int last_digit_index = strlen(str) - 1;

    strcpy(temp, str);

    temp[last_digit_index] = '\0';
    return (returnValue(temp) * 10) + (str[last_digit_index] - '0');
}

int is_sub_array(int arr1[], int size1, int arr2[], int size2){
    for (int i = 0; i < size1; i++)
    {
        int found = 0;
        
        for (int j = 0; j < size2; j++)
        {
            if ( arr2[j] == arr1[i] )
            {
                found = 1;
            }
            
        }
        if (found == 0)
        {
            return 0;
        }

    }
    
    return 1;

}

int main(){
    char str[] = "12hello 35abc";
    char Qc[] = "25392942";
    int arr1[] = {1, 3, 6, 2, 3};
    int arr2[] = {1, 3, 2, 6};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    //Qa
    printf("Length of string: %d\n", alphacount(str)); 
    
    //Qb
    printf("Average value of all digits in the string: %.1f\n", averageOfDigit(str));
    
    //Qc
    printf("Value of string is: %d\n", returnValue(Qc)); 
    
    //Qd
    if ( is_sub_array(arr1, size1, arr2, size2) )
    {
        
        printf("All elements of arr1 is found in arr2");

    } 
    else 
    {
        
        printf("All elements of arr1 is not found in arr2");
    
    }
    
    return 0;
}
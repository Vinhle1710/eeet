/*Write a function for each of the following and test by calling them in main().
a) Accept an array and its size, then return its average value.
b) Accept a string and return sum of even digits in the string
c) Accept a string and print out each word (one word per line)
d) Accept a string and print out the longest word of that string*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

float averageVal( int arr[], int size ) {
    
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return (float)sum/size;
}

int sumEven( char str[] ) {
    
    int sum = 0;

    for (int i = 0; i < strlen(str); i++)
    {   
        if ( isdigit( str[i] ) && (str[i] - '0') % 2 == 0)
        {
            sum += str[i] - '0';
        }
        
    }
    return sum;
}

void printWord( char str[0] ) {
    for (int i = 0; i < strlen(str); i++)
    {
        if ( isalpha( str[i] ) )
        {
            printf("\n%c", str[i]);
        }
        
    }
    
}

int word_beginning(char str[], int pos){ 
    if (isalpha(str[pos]) && (isspace(str[pos - 1]) || pos == 0)){
        return 1;
    } else {
        return 0;
    }
}

int word_length(char str[]) {
    int length = 0;
    while (!isspace( str[length] ) && length < strlen(str)  )
    {
        length++;
    } 
    return length;
}

int main() {
    int arr[2];
    int size = sizeof(arr)/sizeof(arr[0]);

    char str[100] = "1246 hello ny name is Vinhle123";
    
    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % (51);
    }
    
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nAverage value = %.2f", averageVal(arr, size));

    printf("\nSum of even value = %d", sumEven(str));

    printWord(str);

    int first_word_index;

    for (int i = 0; i <= strlen(str); i++){
        if (word_beginning(str, i)){ //beginning of a word
            first_word_index = i;
            break;
        }
    }

    char *longest_word = str + first_word_index;
    for (int i = 0; i <= strlen(str); i++){
        if ( word_beginning(str, i) && (word_length(str + i) > word_length(longest_word))){
                longest_word = str + i;
        }
    }
    
    printf("\n");
    do {
        printf("%c", *longest_word);
        longest_word++;
    } while (!isspace(*longest_word));
}
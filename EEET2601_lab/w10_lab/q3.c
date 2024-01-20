/*Define a truct namely Student which have two elements are name (string) and score (int).
Define another struct namely Class which consist of an array of 3 students.
a. Create a function which allow to input all information for a class
b. Create a function which accepts a class and print out which student has highest score.
Test all the functions in main().
*/

#include <stdio.h>

typedef struct { char name[100]; int score } Student;
typedef struct { Student stuArr[4] } Class; 

void inputClass(Class *c1) {
    for (size_t i = 0; i < 4; i++) 
    {
        printf("\nInput info for student:");
        printf("\n    Name: ");
        scanf(" %[^n]s", c1);
    }
    
}

int main() {

}
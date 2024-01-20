/*The program below inputs and calculate weighted average of two integers (weighting 60%
and 40%). However, there is an issue that make the program provide incorrect output.
Test it with some input cases, and fix the issue*/

#include <stdio.h>
int main() {
    int num1, num2;
    //Input values
    printf("Enter 2 integers (weighted 60%%, 40%%): ");
    scanf("%d %d", &num1, &num2);
    //Calculate the weighted average
    float avg = (float)num1 * 60/100 + (float)num2 * 40/100;
    printf("Weighted average is %.2f \n", avg);
    return 0;
}
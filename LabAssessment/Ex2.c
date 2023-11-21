#include <stdio.h>

int main(){
    int num, digit = 0, count = 0, sum = 0;

    //Prompt the user to input positive interger
    printf("Enter a positive interger: "); 
    scanf("%d", &num);

    while (num > 0){
        //get digit from interger
        digit = num % 10;

        // prep for next loop
        num = num / 10;

        //count digits equal or greater than 5
        if (digit >= 5)
        {
            count ++;

            //calculate sum of digits >= 5
            sum = sum + digit;
        }
    }
    
    // Print the result
    printf("Number of digits>=5 : %d\nTheir sum is: %d", count, sum);

    return 0;
}
/*Get a sequence of positive integers from the user and compute their sum. The sequence
ends when the user enters a negative number (does not end if input zero). The sum should
not include the negative number at the end of the sequence. How many positive numbers
are there in the sequence?*/
#include <stdio.h>

int main(){
    int a, b, sum=0;
    while (a>=0){
        printf("Enter a positive integer: ");
        scanf("%d",&a);
        if (a>=0)
        {
            sum = sum + a;
            b++;
        }else if (a<0){
            printf("Sum is %d.\nThere are %d positive intergers",sum, b);
        }
    }
    return 0;
}
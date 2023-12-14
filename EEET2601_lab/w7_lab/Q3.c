/*An integer is said to be prime number if it is greater than 1 and is divisible only by 1 and
itself. For example, 2, 3, 5 and 7 are prime but 4, 6, 8 and 9 are not. Write a function
that determines if a given integer is a prime number or not.*/

#include <stdio.h>

int naiveIsPrime(int num){
    if (num <= 1)
    {
        return 0;
    }
    
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
        
    }
    return 1;
}

int main(){
    int val;
    printf("Enter a number: ");
    scanf("%d",&val);

    if (naiveIsPrime(val))
    {
        printf("Is Prime\n");
    } else {
        printf("Not Prime\n");
    }
    
}
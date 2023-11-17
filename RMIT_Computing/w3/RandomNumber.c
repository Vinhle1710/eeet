#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int N = 100;
    // Intialize random number generator
    srand(time(NULL));

    //Generate random number form 0 to N
    int num = rand() % (N+1);
    printf("Random number generated: %d\n", num);
    
    return 0;
}
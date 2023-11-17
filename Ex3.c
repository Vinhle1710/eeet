/*Get two numbers x, y, and find x^y using the pow() function from the math.h library.
Hint: include the library by command #include <math.h> and use the option -lm (e.g. gcc
main.c -lm) when compiling your program*/
#include <stdio.h>
#include <math.h>
    int main(){
        int x, y;
        printf("Enter Base Number\n");
        scanf("%d",&x);
        printf("Enter exponent\n");
        scanf("%d",&y);
        int c = pow(x,y);
        printf("%d power by %d is %d\n", x, y, c);
        return 0;
}
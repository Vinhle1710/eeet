#include <stdio.h>
#include <math.h>
    int main(int argc, char){
        float x = 9;
        float y = 2;
        printf("%f\n", abs(x)) ; //absolute value of x
        printf("%f\n", pow(x, y)) ; //x raised to the power of y
        printf("%f\n",  exp( x)); //exponential value e raised to the power of x (e is 2.718282)
        printf("%f\n", log( x)); //logical value e raised to the power of x (log10 x)
        printf("%f\n", sqrt( x)); //sqare root of x
        printf("%f\n", ceil( x)); //ceil of x 3.1 -> 4 (round up to nearest integer)
        printf("%f\n", floor( x)); // floor of x 3.1 -> 4 (round down to nearest integer)
        printf("%f\n",  round( x)); //round down to nearest integer
        return 0 ;
    }
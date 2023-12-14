#include <stdio.h>

//Write a function intpow(base, exponent) that returns the value of base exponent. For example, intpow(3, 4) = 34 = 81

int intpow(int base, int exponent){
    int result = base;
    for (int i = 1; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}

int main() {
    int b, e;
    printf("Enter the base: ");
    scanf("%d", &b);
    printf("Enter the exponent: ");
    scanf("%d", &e);
    printf("%d^%d = %d \n",b ,e, intpow(b, e));
    return 0;
}
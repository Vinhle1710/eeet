#include <stdio.h>

#if 0
void myfunc(int *num) {
    *num = 20;
}

int main() {
    int x = 10;
    printf("x before function call: %d \n", x);
    myfunc(&x);
    printf("x after function call: %d \n\n", x);
}

#else
void swap(int *a, int *b) { //Swap a and b
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    int n1 = 50, n2 = 60;
    printf("Values before swapping: n1 = %d, n2 = %d \n", n1, n2);
    swap(&n1, &n2);
    printf("Values after swapping: n1 = %d, n2 = %d \n", n1, n2);
}
#endif
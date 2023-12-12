#include <stdio.h>

int num = 30; //global variable

void hhi(){
    printf("%d", num);
}

int main(){
    num = 20; //access global variable

    int num = 30; //local variable

    num = 50; //access local variable

    printf("%d\n", num);
    hhi();
    return 0;
}
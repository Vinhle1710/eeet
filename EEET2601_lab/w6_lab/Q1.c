/*This program simply illustrates the usage of a pointer, but has a bug inside (warning).
Check where is the bug, and why, then fix it (print out letter ‘B’).*/

#include <stdio.h>
    int main(){
        
        #if 0 //p1
        char ch = 'A';
        char *ptr = &ch; //pointer ptr points to ch variable
        *ptr = 'B'; //access value of ch through its pointer
        printf("%c\n", ch);
        return 0;
        #endif

        #if 0 //p2: change the value of a to 75?
            int *p, a, b;
            a = 42;
            b = a;
            p = &a;

            *p = 75; //change the value of a to 75
            printf("%d\n", a);

            a = 0;

            *(&a) = 75;//change the value of a to 75
            printf("%d\nB = %d", a, b);
        #endif
        
        #if 0 //p3: change the value 30 in the array become 100
            int arr[] = {10, 20, 30, 40, 50, 60};
            int *p = arr;
            printf("%d\n", arr[2]);

            arr[2] = 100;
            printf("%d\n", arr[2]);
            arr[2] = 30;
            printf("%d\n", arr[2]);

            arr[2] = 30;
            *(p + 2) = 100;
            printf("%d\n", arr[2]);
            arr[2] = 30;
            printf("%d\n", arr[2]);

            *(arr + 2) = 100;
            printf("%d\n", arr[2]);
            arr[2] = 30;
            printf("%d\n", arr[2]);

            printf("%d\n", p[2]);
            p[2] = 100;
            printf("%d\n", arr[2]);
            printf("%p\n", p);
        #endif
        
        return 0;
    }

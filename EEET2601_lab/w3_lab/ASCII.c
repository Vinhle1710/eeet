/*Use loop statement(s) to display the characters in the ASCII Table from '!' to '~' nicely as
below. There are 15 characters per line. The characters are separated by one space.*/

#include <stdio.h>
#include <ctype.h>

int main(){
    int a = 0;
    for (int i = 33; i <127; i++){
        printf("%c ", i);
        a++;
        if (a % 15 == 0)
        {
            printf("\n");
        }
    }
    return 0;
}
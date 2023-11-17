        /*Get an integer as minutes then calculate its equivalent in hours and remaining minutes. 
        For example, 768 minutes is 12 hours 48 minutes. Hint: use the / and % operator.*/
#include <stdio.h>
    int main(int argc, char){
        int hour, minute, remaining;
        printf("Enter amount of minutes\n");
        scanf("%d",&minute);
        hour = minute / 60;
        remaining = minute % 60;
        printf("Enter %d minutes equal to %d hours and remaining %d minutes\n", minute, hour, remaining);
        return 0;
    }
    
/*Write a program that prompt the user to enter the string source in the format "dd/mm/yyyy" (must
read in as a string), then convert to a string dest in the format "dd Month yyyy" and print out result.
Assume that the string src is always in a correct format and valid*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *months[] = {
    "January", "February", "March", "April", "May", "June", "July",
    "August", "September", "October", "November", "December"
};

void convertDateFormat(const char *src, char *dest) {
    
    #if 0

    int day, month, year;
    sscanf(src, "%d/%d/%d", &day, &month, &year);
    sprintf(dest, "%d %s %d", day, months[month - 1], year);

    #else

    //Convert date
    strncpy(dest, src, 2);
    dest[2] = ' ';

    //Get month name
    int month = (src[3] - '0') * 10 + (src[4] - '0');
    char *month_name = months[month - 1];

    //Convert month
    strcpy(dest + 3, month_name);
    dest[3 + strlen(month_name)] = ' ';

    //Convert year
    strcat(dest, src + 6);

    #endif
}

int main() {
    char src[11], dest[20];

    printf("Enter a date in dd/mm/yyyy: ");
    scanf("%10s", src);

    convertDateFormat(src, dest);

    printf("Converted format: %s\n", dest);

    return 0;
}
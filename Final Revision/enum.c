#include <stdio.h>
enum day {MON = 2, TUE, WED, THU, FRI, SAT, SUN};
int main() {
//Check values of each enum constants
printf("The value of enum week: %d %d %d %d %d %d %d \n",
MON, TUE, WED, THU, FRI, SAT, SUN);
//Example to use with for loop
for (enum day i = MON; i <= SUN; i++) {
printf("%d ", i);
}
return 0;
}

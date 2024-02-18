#include <stdio.h>

/*Define a data type time with elements are integer values of hour, minute, second.
Ask the user to input two time values in hh:mm:ss format, and print out their difference (first time
– second time) in hours with two digits of precision after decimal point.*/

typedef struct { int hours; int minutes; int seconds; } TimePoint ;

double totalHour(TimePoint t){
    return t.hours + (double)t.minutes / 60 + (double)t.seconds / 3600;
}

int main (){
    TimePoint first_time_point;
    TimePoint second_time_point;

    printf("Enter the first time point in hh:mm:ss format: ");
    scanf("%d:%d:%d", &first_time_point.hours, &first_time_point.minutes, &first_time_point.seconds);

    printf("Enter the second time point in hh:mm:ss format: ");
    scanf("%d:%d:%d", &second_time_point.hours, &second_time_point.minutes, &second_time_point.seconds);

    double timedif = totalHour(first_time_point) - totalHour(second_time_point);
    printf("Time Difference: %.2f hours\n", timedif);


    //Create an array of 4 time values and ask the user to input values for them with correct format
    //above, then print out the latest time
    
    TimePoint arr[4];
    
    for (int i = 0; i < 4; i++)
    {
        printf("Enter time point %d in hh:mm:ss format: ", i + 1);
        scanf("%d:%d:%d", &arr[i].hours, &arr[i].minutes, &arr[i].seconds);
    }

    TimePoint latest = arr[0];

    for (int i = 0; i < 4; i++)
    {
        if ( totalHour( arr[i] ) > totalHour(latest))
        {
            latest = arr[i];
        }
        
    }
    
    printf("The latest time point is: %d:%d:%d", latest.hours, latest.minutes, latest.seconds);


    //Enter a hour, search from array same hour
    int hour;
    printf("Enter hour: ");
    scanf("%d", &hour);
    for (int i = 0; i < 4; i++)
    {
        if (arr[i].hours == hour)
        {
            printf("%d:%d:%d", arr[i].hours, arr[i].minutes, arr[i].seconds);
        }
        
    }
    

}

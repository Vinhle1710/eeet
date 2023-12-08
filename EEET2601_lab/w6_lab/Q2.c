#include <stdio.h>
#include <ctype.h>
#include <string.h>
    int main(){
        int arr[] = {12, 7, -3, 4, 1};

        #if 0 //a. Print the array elements in the normal order (first to last)
        for (int i = 0; i < 5; i++) 
        {
            printf("%d ", *(arr + i));
        }
        printf("\n");
        
        
        for (int *p = arr; p < arr + 5; p++)
        {
            printf("%d ", *p);
        }
        printf("\n");
        #endif

        #if 0 //b. Print the array elements in the reverse order (last to first).
        for (int i = 4; i >= 0; i--)
        {
            printf("%d ", *(arr+i));
        }
        printf("\n");
        
        for (int *p = arr + 4; p >= arr; p--)
        {
            printf("%d ", *p);
        }
        printf("\n");
        #endif

        #if 0 //c. Calculate the sum of all elements in the array
        int sum =  0;
        for (int i = 0; i < 5; i++)
        {
            sum += arr[i];
        }
        printf("%d\n",sum);
        sum = 0;

        for (int *p = arr; p < arr + 5; p++)
        {
            sum += *p;
        }
        printf("%d\n",sum);
        sum = 0;

        int *p = arr;
        for (int i = 0; i < 5; i++)
        {
            sum += *(p+i);
        }
        printf("%d\n",sum);
        sum = 0;
        #endif

        #if 0 //d. Reverse the elements of the array, i.e. make it become [1, 4, -3, 7, 12].
        int *p = arr;
        for (int i = 0; i < 3; i++)
        {
            int temp = *(p + i);
            *(p + i) = *(p + 4 - i);
            *(p + 4 - i) = temp;
        }

        for (int i = 0; i < 5; i++)
        {
            printf("%d ", *(p+i));
        }
        printf("\n");
        #endif

        return 0;
    }
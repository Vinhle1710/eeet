#include <stdio.h>


int main(void){
    first_line();

}

int get_num(){
    int num;
    do
    {
        printf("Enter a number (1 - 15): ");
        scanf("%d",&num);
        if (num > 15 || num < 1)
        {
            printf("Invalid Number\n");
        }
        
    } while (num > 15 || num < 1);
    return num;
}

int first_line(){
    for (int i = 1; i <= get_num(); i++)
    {
        printf("%3d ", i);
    }
    printf("\n");
}
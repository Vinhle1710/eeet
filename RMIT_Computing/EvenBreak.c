#include    <stdio.h>
int main(){
    int num;
    do
    {
        printf("Enter an odd number:\n");
        scanf("%d",&num);
    } while (num %2 == 1);
     
    /* Second way:
    do{ 
        printf("Enter an odd number:\n");
        scanf("%d",&num);
        
        if (num %2 == 0){
            break;
        }
    }while (1);*/
     
    return 0;
}
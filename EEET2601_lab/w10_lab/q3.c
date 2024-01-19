#include <stdio.h>
#include <math.h>
    
    typedef struct { char name[100] ; int score; } Student;
    
    typedef struct { Student stuArr[3] } Class;

void inputClassInfo(Class *cl){
    for (int i = 0; i < 3; i++){ //loop through each student of the class
        printf("\nEnter info for student %d: \n", i + 1);
        printf("    Name: ");
        scanf(" %[^\n]s", cl->stuArr[i].name);

        printf("    Score: ");
        scanf("%d", &(cl->stuArr[i].score) );
    }
}

Student highScore(Class cl){
    Student maxStu = cl.stuArr[0];
    for (int i = 0; i < 3; i++)
    {
        if (cl.stuArr[i].score > maxStu.score)
        {
            maxStu = cl.stuArr[i]; 
        }
        
    }
    return maxStu;
}

int main() {
    Class class1;
    inputClassInfo(&class1); //must pass by pointer to modify values inside the function
    printf("Highest Score = %d", highScore(class1).score);
}
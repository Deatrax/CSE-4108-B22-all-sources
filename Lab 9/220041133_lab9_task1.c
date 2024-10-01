#include<stdio.h>

int main(){

    int size;

    scanf("%d",&size);
    
    for (int i = 1; i < size+1; i++){

        for (int j = i; j < size; j++)
        {
            printf("*");
        
        }
        
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        
        for (int j = 0; i < i; j++)
        {
            printf(" ");
        }
        
        for (int j = i; j < size; j++)
        {
            printf("*");
        
        }
        printf("\n\n");
        
    }
    
}   //the task was handwritten
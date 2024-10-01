#include<stdio.h>

int main(){

    int N;
    printf("total number of students :");
    scanf("%d",&N);

    int C;
    printf("\ncapacity of the bus :");
    scanf("%d",&C);

    int need; //i have used int here because i don't need the floating numbers to get no of buses.
    if(N%C!=0){

        need=N/C+1;
    }

    printf("\nTotal number of buses needed =%d\n\n",need);
    
    return 0;
}
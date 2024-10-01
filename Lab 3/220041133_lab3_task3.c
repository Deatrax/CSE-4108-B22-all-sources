#include<stdio.h>

int main(){

    float item1;
    float item2;
    float item3;
    
    printf("\nEnter price of Item 1:");
    scanf("%f",&item1);

    printf("Enter price of Item 2:");
    scanf("%f",&item2);

    printf("Enter price of Item 3:");
    scanf("%f",&item3);


    printf("\n%25s\n","---Total Bill---");
    printf("\n%15s  $%7.2f\n","Item 1:",item1);
    printf("%15s  $%7.2f\n","Item 2:",item2);
    printf("%15s  $%7.2f\n\n\n\n","Item 3:",item3);

    float sub=item1+item2+item3;
    printf("%15s  $%7.2f\n","Sub Total:",sub);
    
    float service=0.15*sub;
    printf("%15s  $%7.2f\n","Service:",service);

    float total=service+sub;
    printf("%15s  $%7.2f\n","Total:",total);

    return 0;

}
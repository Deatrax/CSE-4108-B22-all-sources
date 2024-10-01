#include<stdio.h>

int main(){

    printf("%20s  $%5.2f\n","Item1",3.44);
    printf("%20s  $%5.2f\n","Another Item",33.44);
    printf("%20s  $%5.2f\n\n\n","Last Item",63.);
    printf("%20s  $%6.2f\n","Sub Total:",99.88);
    printf("%20s  $%6.2f\n","Tax:",14.98);
    printf("%20s  $%6.2f\n","Total:",114.86);

    return 0;
}
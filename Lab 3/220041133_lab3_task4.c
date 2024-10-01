#include<stdio.h>
#include<math.h>
#define PI 3.1416

int main(){

    float dia;
    printf("\nFirst the CIRCLE,\nEnter the diameter of the circle :");
    scanf("%f", &dia);
    
    float c_area= PI*(dia/2)*(dia/2);
    printf("\n\nThe area is :%.3f sq. unit\n\n\n",c_area);

    float base;
    printf("Now the TRIANGLE,\nEnter the Base of it :");
    scanf("%f", &base);

    float height;
    printf("\nEnter the Height of it :");
    scanf("%f", &height);

    float diagonal= sqrt((height*height)+(base*base));
    printf("\n\nThe length of the diagonal is :%.3f\n", diagonal);

    return 0;
}
#include<stdio.h>


float CalculateAverage(float num1, float num2, float num3){

    return (num1+num2+num3)/3;
}
int main(){

    float a,b,c;
    printf("Enter three numbers:"); 
    scanf("%f%f%f",&a,&b,&c);

    float avg=CalculateAverage(a,b,c);
    
    printf("Average: %g",avg);

    return 0;
}
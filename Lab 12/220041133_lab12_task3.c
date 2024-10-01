#include<stdio.h>

float FindLargest(float num1, float num2, float num3){

    float big=num1;

    if(big<num2) big=num2;
    if(big<num3) big=num3;

    return big;
}

float FindSmallest(float num1, float num2, float num3){

    float litl=num1;

    if(litl>num2) litl=num2;
    if(litl>num3) litl=num3;

    return litl;
}

float DiffSqrOfSmallestLargest(float num1, float num2, float num3){

    float lrg=FindLargest(num1,num2,num3);
    float smol=FindSmallest(num1,num2,num3);

    return (lrg*lrg)-(smol*smol);
}

int main(){

    float a,b,c;
    printf("Enter three numbers:"); 
    scanf("%f%f%f",&a,&b,&c);

    float lrg=FindLargest(a,b,c);
    float smol=FindSmallest(a,b,c);
    float targ=DiffSqrOfSmallestLargest(a,b,c);

    printf("\nSquare difference between %g (smallest) and %g (largest): %g",smol,lrg,targ);

    return 0;
}
#include<stdio.h>
#include<stdbool.h>
#include<math.h>


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

bool IsPrime(int num){

    
    if(num<=1){

        return false;
    };

    for (int i = 2; i < num; i++){
        
        
        if (!(num%i) ){
        
            return false;
        }
    }

    return true;
}

int PrimeCount(int start, int end, float num3){

    for (int i = start; i <=end; i++)
    {
        if(IsPrime(i)) num3++;
    }

    //printf("\nreturned cnt is %f",num3);
    return num3;
}

int main(){

    float a,b,c;
    printf("Enter three numbers:"); 
    scanf("%f%f%f",&a,&b,&c);

    int lrg=FindLargest(a,b,c);
    int smol=FindSmallest(a,b,c);

    int cnt=PrimeCount(smol,lrg,0);
    printf("\nPrime count between [%d,%d]:%d",smol,lrg,cnt);

    return 0;
}
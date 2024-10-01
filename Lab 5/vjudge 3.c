#include<stdio.h>

int main(){

    int num,sum=0,sto;
    scanf("%d",&num);

    while (num>0)
    {
        sto=num%10;
        sum +=sto;
        num=num/10;
    }

    printf("%d",sum);

    return 0;
    
}
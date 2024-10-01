#include<stdio.h>

int main(){

    int a,b,sum=0;
    printf("Enter two numbers  :");
    scanf("%d%d",&a,&b);

    for (int i = a; i <= b; i++){
    
        if (!(i%5)){
        
            sum +=i;
        };
        
    };

    printf("Sum is %d\n",sum);
    return 0;
    
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int superDigit(char *num){

    int n=atoi(num);
    int res=10;
    while ((res/10)!=0)
    {   
        printf("\nRes is: %d\n",res);
        while (n){
            
            res+=n%10;
            n=n/10;
            printf("n is: %d, res is: %d\n",n,res);
        }
        n=res;
    }
    
}

int main(){

    char n;
    printf("Give your number: ");
    scanf(" %c",&n);

    int ret=superDigit(&n);
    printf("The super digit is:%d",ret);
    return 0;
}
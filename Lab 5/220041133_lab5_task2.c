#include<stdio.h>

int main(){

    int a;
    printf("Enter a number:  ");
    scanf("%d",&a);

    if(a<=1){

        printf("%d is a composite number",a);
        return 0;
    };

    for (int i = 2; i < a; i++){   // a/2 is also acceptable 
        
        //investigate: printf("dividing %d by %d we get %d as remainder\n",a,i,a%i);
        if (!(a%i) ){
        
            printf("%d is a composite number\n",a);
            return 0;
        }
    }

    printf("%d is a prime number\n",a);

    return 0;
}
#include<stdio.h>

int main(){

    char optn='a';
    float a,b;
    int temp;

    while (1){
        
        printf("Enter two numbers: ");
        scanf("%f %f",&a,&b);

        

        printf("Choose yout operation:\n        [a/A]add\n        [s/S]subtract\n        [m/M]Multiply\n        [d/D]divide\n        [r/R]reverse\n=");
        scanf(" %c",&optn);

        switch (optn){
        
            case 'a':
            case 'A': printf("The addition is: %.2f\n",a+b);
                    break;
                    

            case 's':
            case 'S': printf("The subtraction (a-b) is %.2f\n",a-b);
                    break;
                    

            case 'm':
            case 'M': printf("The multiplication is %.2f\n",a*b);
                    break;
                    

            case 'd':
            case 'D': 

                    if (b==0)
                    {
                        printf("Invalid digit for 2nd number, cannot divide by 0\n");
                        break;
                    }
                    
                    printf("The division (a/b) is %.2f\n",a/b);
                    break;

            case 'r':
            case 'R': 
            
                temp=a;

                printf("The reverse of the first number is :");
                while (temp>0){
                
                    printf("%d",temp%10);

                    temp /=10;
                }
                printf("\n");

                temp=b;
                printf("The reverse of the second number is :");
                while(temp>0){

                    printf("%d",temp%10);

                    temp /=10;
                }
                printf("\n");
                break;

            default: printf("Invalid choice\n");
                


        } //end of switch

        printf("Do you want to continue? [y]yes [n]no\n");
        char ender;
        scanf(" %c",&ender);

        switch (ender)
        {
        case 'y':
            continue;;

        case 'n':
            return 0;
            
        
        default:
            printf("You have entered %c which is neither y nor n.\nNow face the consequences.\n",ender);
        }
        
        
        
    }//end of while

    //end of main func
}
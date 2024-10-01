#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main(){

    
        
    printf("I have generated a number. Can you guess it?\n");
    int gamNo=1,attmps=0;

    while (1){
        
        srand(time(NULL));
        int r = rand();

        int targ=r%1024;
        targ +=1;

        //printf("The targeted number is %d\n",targ);         DEBUG

        int inp,cnt=1;
        

        while(1){

            printf("Enter your number\n");
            scanf(" %d",&inp);
            if (inp==targ)
            {
                attmps =attmps+cnt;
                printf("Game no: %d Attempts:%d Total attempts:%d\nDo you wish to continue?\n1.Yes[y] 2.No[n]\n",gamNo,cnt,attmps);
                break;

            }

            else if(inp>targ){

                printf("Wrong number! Go lower.\n");
                cnt++;
                continue;
            }
            else if(inp<targ){

                printf("Wrong number! Go higher.\n");
                cnt++;
                continue;
            }
        }//end of game while

        char ender;
        scanf(" %c",&ender);
        if(ender=='y'){
            
            printf("New number generated\n");
            gamNo +=1;
            continue;
            
        }
        else{

            
            float avg=(float)attmps/gamNo;
            printf("Games: %d Average score:%.2f",gamNo,avg);
            break;
        }
        
    }//end of main while
    
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int r,arr[15];
    int arr2[15]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},sig=0;
    srand(time(NULL));

    // for (int i = 0; i < 15; i++)
    // {   
    //     //arr2[i]=1;
    //     printf("arr2[%d] is %d\n",i,arr2[i]);
    // }

    for(int i = 0; i < 15; i++){

        r=rand()%99;
        r++;
        arr[i]=r;

    }

    for(int i = 0; i < 1; i++){   //there absolutely no reason for this loop to exist. yet it is there.

        printf("Iteration%3d:",1);

        for(int j = 0; j < 15; j++){

            printf("%3d",arr[j]);

        }

        printf("\n");
    }

    int cnt=2;
    while(1){

        for(int i = 0; i < 15; i++){

            if(arr2[i]==0) continue;
            
            for (int j = 2; j < arr[i]; j++){//investigate: printf("dividing %d by %d we get %d as remainder\n",a,i,a%i);

                
                if (!(arr[i]%j) ){

                    sig=1;
                    break;
                }
                
                
            }

            if (sig==1)
            {
                arr[i]=rand()%99;
                arr[i]++;
                sig=0;
            }

            else{

                arr2[i]=0;
            }
        
        }

        printf("Iteration%3d:",cnt);
        cnt++; 

        for(int j = 0; j < 15; j++){

            printf("%3d",arr[j]);

        }
        printf("\n");

        if(
            arr2[0]==0 && 
            arr2[1]==0 &&
            arr2[2]==0 &&     
            arr2[3]==0 &&  
            arr2[4]==0 &&  
            arr2[5]==0 &&  
            arr2[6]==0 &&  
            arr2[7]==0 &&  
            arr2[8]==0 &&  
            arr2[9]==0 &&  
            arr2[10]==0 &&  
            arr2[11]==0 &&  
            arr2[12]==0 &&  
            arr2[13]==0 &&  
            arr2[14]==0    
        ){

            break;
        }
    }

  return 0;
}
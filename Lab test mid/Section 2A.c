#include<stdio.h>

int main(){

    int expeds=1,H,M,S,Hin,Min,Sin;
    char guy;

    scanf("%d",&expeds);
    while (expeds)
    {   
        printf("Expedition %d:\n",expeds);
        scanf("%d:%d:%d",&H,&M,&S);
        printf("Current time: %d:%d:%d\n",H,M,S);
        while (1)
        {
            fflush(stdin); //BECAUSE THE NEW LINE CHARACTER CAN CAUSE INPUT ERROR.
            scanf(" %c%d:%d:%d",&guy,&Hin,&Min,&Sin);
            if (guy=='C')
            {
                break;
            }
            
            switch(guy){

                case 'T': 
                    S += Sin;
                    if (S >= 60) {
                        S -= 60;
                        M++;
                    }
                    M += Min;
                    if (M >= 60) {
                        M -= 60;
                        H++;
                    }
                    H += Hin;
                    break;
                case 'G': 
                    S -= Sin;
                    if (S < 0) {
                        S += 60;
                        M--;
                    }
                    M -= Min;
                    if (M < 0) {
                        M += 60;
                        H--;
                    }
                    H -= Hin;
                    break;
                
            }    
            
            printf("Current time: %d:%d:%d\n",H,M,S);
        }

        printf("Current time: %d:%d:%d\n",H,M,S);
        expeds--;
    }
    
    return 0;
} 
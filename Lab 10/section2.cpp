#include<stdio.h>

int main(){

    int n,f;
    printf("Enter the signal length: ");
    scanf("%d",&n);

    float arrIN[n];
    float arrOUT[n];
    printf("Enter the signal: ");
    for (int i = 0; i < n; i++)
    {
        scanf(" %f",&arrIN[i]);
    }

    printf("Enter the filter length: ");
    scanf("%d",&f);

    for (int i = 0; i < n; i++)
    {   
        if (
            i<(((f+1)/2)-1)
        )
        {
            for (int j = 0; j <=(i+(((f+1)/2)-1)); j++)
            {
                arrOUT[i]+=arrIN[j];
            }

            arrOUT[i]/=f;
        }
        else if(i>(n-(f+1)/2)){

            for (int j = (i-((f-1)/2)); j <=n; j++)
            {
                arrOUT[i]+=arrIN[j];
            }

            arrOUT[i]/=f;
        }
        else{

            for (int j = (i-(((f+1)/2)-1)); j< (i-(((f+1)/2)-1))+f; j++)
            {
                arrOUT[i]+=arrIN[j];
            }
            
            arrOUT[i]/=f;
        }
        
        //printf("%.6f\n",arrOUT[i]);
    }
    
    printf("Smoothed signal: ");
    for (int i = 0; i < n; i++)
    {
        printf("%6.4f ",arrOUT[i]);     
    }
    
    
}
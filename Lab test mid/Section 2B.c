#include<stdio.h>

int main(){

    int plays,R,G,B,Rstick=0,Gstick=0,Bstick=0,points=0,Rcap,Gcap,Bcap;

    //printf("Enter the number of plays: ");
    scanf("%d",&plays);
    // printf("Enter the capacity of the Sticks: ");
    // scanf("%d%d%d",&Rcap,&Gcap,&Bcap);
    // printf("ENetr the values of the card: ");

    for (int i=1; i<plays+1;i++)
    {   
        scanf("%d %d %d",&Rcap,&Gcap,&Bcap);
        while (1)
        {
            scanf("%d %d %d",&R,&G,&B);
            if(!R && !G && !B) break;

            Rstick +=R;
            Gstick +=G;
            Bstick +=B;

            if(Rstick>=Rcap){
                Rstick=0;
                Gstick++;
            }
            if(Gstick>=Gcap){
                Gstick=0;
                Bstick++;
            }
            if(Bstick>=Bcap){
                Bstick=0;
                points++;
            }

        } //end of input loop

        printf("Game %d: %d points\n",i,points);
        points=0;
        
    }
    return 0;
}


/* Sifat 246: 
most efficient one is...converting all the card input into red ring equivelent (1 green = 3 red if the capacity of red is 3. 1 blue = 2*3 if the capacity of green and red are 2 and 3)
then 1 point er jonno necessary red ring equivalent diye bhag kore dilei point aisha porbe...
1 point 🙁 red_cap * green_cap*blue_cap) red rings
*/
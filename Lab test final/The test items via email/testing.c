#include<stdio.h>
#include<string.h>

int main(){

    char wrd[10][10];
    scanf("%s",wrd[1]);
    printf("\n\nThe word is %s",wrd[1]);

    char tem[10];
    strcpy(tem,wrd[1]);
    strcpy(wrd[5],tem);

    printf("\n\nChecking word is %s",wrd[5]);
}

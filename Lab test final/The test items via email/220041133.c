#include<stdio.h>
#include<string.h>

int calculateHapiness(int *hapi,char word[]){

    int res=0;
    int i=0;
    while(word[i]!='\0'){

        int n=(int)word[i]-65;
        res +=hapi[n];
        i++;
    }
    return res;
}

void sortWord(int *hapi, char word[10][10]){

    int arr[10];

    for(int i=0;i<10;i++){

        arr[i]=calculateHapiness(hapi,word[i]);
    }

    //VALUES BEFORE SORT
    //printf("The happiness values are:\n");

    //for(int i=0;i<10;i++){

    //    printf("Word: %s, Value: %d\n",word[i],arr[i]);
    //}

    //SORTING

    for(int i=0; i<10; i++){

        for(int j=i; j<10; j++){

            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                char tem[10];
                strcpy(tem,word[i]);
                strcpy(word[i],word[j]);
                strcpy(word[j],tem);
            }
        }
    }

    printf("\n\nThe happiness values are:\n\n");

    for(int i=0;i<10;i++){

        printf("%s %d\n",word[i],arr[i]);
    }
}


int main(){

    printf("Enter the happiness values: ");
    int hapi[26];
    for(int i=0; i<26; i++){

        scanf("%d",&hapi[i]);
    }

    char wrd[10][10];
    printf("Enter the words: ");
    for(int i=0; i<10; i++){

        scanf("%s",wrd[i]);
    }
    printf("\nThe given words are:");  //DEBUG
    for(int i; i<10; i++){

        printf(" %s",wrd[i]);
    }

    sortWord(hapi,wrd);
}

#include<iostream>
using namespace std;

int main(){


    int ttl, wrng, right;
    start:
    cout<<"Enter the number of questions answered by the student: ";
    cin>>ttl;
    
    if(ttl>100){
        cout<<"invalid input try again"<<endl;
        goto start;
    }

    cout<<"Enter the number of wrong answers: ";
    cin>>wrng;

    if(wrng>100){
        cout<<"invalid input try again"<<endl;
        goto start;
    }

    right= ttl-(1.25*wrng);

    if(right>40 && right <70){

        cout<<"The student is selected for self financed admission"<<endl;

    }

    else if(right>=70 && right < 95){

        cout<<"The student is selected for Partial Scolarship"<<endl;

    }

    else if(right>=95){

        cout<<"The student is selected for Full Scolarship"<<endl;
    }

    else if(right<=40 && right>=0){

        cout<<"The student is not selected for admission"<<endl;
    }

    else if(right>100 || right < 0){

        cout<<"invalid input try again"<<endl;
        goto start;
    }



    return 0;
}
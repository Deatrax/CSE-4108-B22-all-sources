#include<iostream>
using namespace std;


int main(){

    int a,b;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b;

    if (a==b){
    
        cout<<"The numbers are equal"<<endl;
    }

    else if(a>b){

        cout<<"First number is greater than second number"<<endl;
    }

    else if(a<b){

        cout<<"First number is smaller than second number"<<endl;
    }

    return 0;
    
}
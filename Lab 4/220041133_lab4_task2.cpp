#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;

    if(a>=b && a>=c){

        cout<<a<<" is the largest number"<<endl;
    }

    else if(b>=a && b>=c){

        cout<<b<<" is the largest number"<<endl;
    }

    else if(c>=a && c>=b){

        cout<<c<<" is the largest number"<<endl;
    }

    if(a<=b && a<=c){

        cout<<a<<" is the smallest number"<<endl;
    }

    else if(b<=a && b<=c){

        cout<<b<<" is the smallest number"<<endl;
    }

    else if(c<=a && c<=b){

        cout<<c<<" is the smallest number"<<endl;
    }

    return 0;

}
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int task1(){

  int N,cnt=0;
  string bits;
  cin>>N>>bits;
  if(N==1){

    for(int i=0; i<8; i++){

      if(bits[i]=='1') cnt++;
    }

    if(!(cnt%2)){

      cout<<bits<<'0'<<endl;
    }
    else{
      cout<<bits<<'1'<<endl;
    }
  }
  else if(N>1){

    int byte[N];
    int j=0;
    for(int i=0; i<N;i++){
      cnt=0;
      for( j=j;j<(i+1)*8;j++){

        if(bits[j]=='1') cnt++;
        cout<<bits[j];
      }
      if(!(cnt%2)) byte[i]=0;
      else byte[i]=1;
      cout<<byte[i]; 
      
    }
    
  }
  
  
  
  return 0;
}
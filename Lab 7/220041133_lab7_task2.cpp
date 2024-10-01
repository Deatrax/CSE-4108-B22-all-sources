#include<iostream>
#include<cmath>
using namespace std;

int task2() {
  
  int a,b,i,j,input,cnt=1,x1,x2,y1,y2;
  float dist;
  cin>>a>>b;
  cout<<"\n";
  for(i=0;i<a;i++){
    
    for(j=0;j<b;j++){

      cin>>input;
      if(input==1){
        cout<<"Loation "<<cnt<<':'<<i<<','<<j<<endl;
        
        switch(cnt){

          case 1: x1=i; y1=j; 
            break;
          case 2: x2=i; y2=j; 
            break;
          
        }
        cnt++;
      }
      
    }
  }
  //cout<<"cheak :"<<x1<<" "<<y1<<endl; 
  //cout<<"cheak :"<<x2<<" "<<y2<<endl;
  dist= sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));

  cout<<"Distance :"<<dist<<endl;
  return 0;
}
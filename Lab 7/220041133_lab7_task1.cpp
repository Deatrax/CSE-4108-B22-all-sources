#include<iostream>
#include<stdio.h>
using namespace std;

int task1() {
  int i,j,n;
  cout<<"Enter the size of the shape: "<<endl;
  
  cin>>n;

  
  for(i=1;i<=n;i++){  //shape 1
    
    for(j=1;j<=i;j++){
      
      cout<<"*";
      
    }
    cout<<"\n";
  }

  cout<<"\n";
  
  for(i=1;i<=n;i++){ //shape 2
    
    for(j=i;j<=n;j++){
      
      cout<<"*";
      
    }
    cout<<"\n";
  }

  cout<<"\n";

  for(i=1;i<=n;i++){ //shape 3
    
    for(j=i;j<=n-1;j++){ //spacer
      
      cout<<" ";
      
    }
    
    for(j=1;j<=i;j++){ // "*" printer
      
      cout<<"*";
      
    }
    cout<<"\n";
  }

  cout<<"\n";

  for(i=1; i<=n; i++){  //shape 4

    for(j=1; j<=i-1;j++){ //spacer
      cout<<" ";
    }

    for(j=i;j<=n;j++){  // "*" printer
      cout<<"*";
    }
    cout<<"\n";
  }

  cout<<"\n";

  for(i=1;i<=n;i++){ //shape diamond upper
    
    for(j=i;j<=n-1;j++){ //spacer
      
      cout<<" ";
      
    }

    for(j=1; j<=(2*i)-1;j++){
      cout<<"*";
    }
    cout<<"\n";
  }
   for(i=n-1;i>=1;i--){ //shape diamond lower
    
    for(j=n-1;j>=i;j--){ //spacer
      
      cout<<" ";
      
    }

    for(j=(2*i)-1;j>=1;j--){
      cout<<"*";
    }
    cout<<"\n";
  }
  return 0;
}
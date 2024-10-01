#include<stdio.h>
#include<stdbool.h>

float CalculateAverage(float num1, float num2, float num3){

  return (num1 + num2 + num3)/3;
}



float FindLargest(float num1, float num2, float num3){

  float big=num1;

  if(big<num2) big=num2;
  if(big<num3) big=num3;

  return big;
}



float FindSmallest(float num1, float num2, float num3){

  float litl=num1;

  if(litl>num2) litl=num2;
  if(litl>num3) litl=num3;

  return litl;
}



bool IsPrime(int num){

  if(num<=1){

    return false;
  }

  for(int i=2; i<num; i++){

    if(!(num%i)){

      return false;
    }
  }

  return true;
}



int PrimeCount(int start, int end, float num3){

  for(int i=start; i<=end; i++){

    if(IsPrime(i)) num3++;
  }

  return num3;
}


float DiffSqrOfSmallestLargest(float num1, float num2, float num3){

  float lrg=FindLargest(num1,num2,num3);
  float smol=FindSmallest(num1,num2,num3);

  return (lrg*lrg)-(smol*smol);

}



void task1(float a,float b,float c){

  float avg=CalculateAverage(a,b,c);

  printf("1)Average: %g",avg);
}



void task2(float a,float b,float c){

  float lrg=FindLargest(a,b,c);
  float smol=FindSmallest(a,b,c);

  printf("\n2)Smallest: %g and largest: %g",smol,lrg);
}



void task3(float a,float b,float c){

  float lrg=FindLargest(a,b,c);
  float smol=FindSmallest(a,b,c);
  float targ=DiffSqrOfSmallestLargest(a,b,c);

  printf("\n3)Square difference between %g (smallest) and %g (largest): %g",smol,lrg,targ);
}



void task4(float a,float b,float c){

  int lrg=FindLargest(a,b,c);
  int smol=FindSmallest(a,b,c);

  int cnt=PrimeCount(smol,lrg,0);
  printf("\n4)Prime count between[%d,%d]:%d",smol,lrg,cnt);
}



int main(){

  float a,b,c;
  printf("Enter three numbers:");
  scanf("%f%f%f",&a,&b,&c);

  int opt;
  printf("Choose an option:\n1.Average\n2.Finding the Smallest and the Largest Number\n3.Difference between the Square of the Smallest and Largest\n4.Prime Counts\n5.All\n\nyour option=");
  scanf("%d",&opt);

  printf("\n\n");
  switch(opt){
    case 1: task1(a,b,c); break;
    case 2: task2(a,b,c); break;
    case 3: task3(a,b,c); break;
    case 4: task4(a,b,c); break;
    case 5: task1(a,b,c); task2(a,b,c); task3(a,b,c); task4(a,b,c); break;
  
  }
}
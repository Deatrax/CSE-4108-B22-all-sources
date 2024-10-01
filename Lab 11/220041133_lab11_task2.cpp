#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int task2() {

  int N, cnt = 0, j = 0;
  string bits;
  cin >> N >> bits;
  int bytes = N / 8;

  for (int i = 0; i < bytes; i++) {
    //cnt = 0;
    for (; j < ((i + 1) * 9) - 1; j++) {

      //cout << "bits[" << j << "] is: " << bits[j] << endl;
      if (bits[j] == '1')
        cnt++;
    }

    // if(bytes>1){
    //   for(j=j;j<(i+1)*9-1;j++){}
    // }

    //cout << "i index is now: " << i << "\nJ checked upto is now:" << j << "\nbits[" << j << "] is: " << bits[j] << "\ncount is: " << cnt << endl;

    if (!(cnt % 2)) { // even
      if (bits[j] == '0') {

        j++;
        cnt = 0;
        continue;
      } else {
        cout << "Corrupted" << endl;
        return 0;
      }
    } else { // odd
      if (bits[j] == '1') {

        j++;
        cnt = 0;
        continue;

      } else {
        cout << "Corrupted" << endl;
        return 0;
      }
    }

    
  }

  cout << "Not Corrupted";

  return 0;
}
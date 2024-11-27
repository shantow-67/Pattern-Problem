#include <iostream>
using namespace std;


// problem 8

int main() {
  for (int i = 1; i <= n; i++) {
    for(int k=0;k<i;k++){
      cout<<" ";
    }
    for (int j =(n-i)*2+1; j >=1; j--) {
      cout << "*";
    }
    cout << "\n";
  }
}


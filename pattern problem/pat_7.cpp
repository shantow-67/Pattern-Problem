#include <iostream>
using namespace std;

// problem 7
int main() {
  for (int i = 1; i <= n; i++) {
    for(int k=n-i;k>0;k--){
      cout<<" ";
    }
    for (int j = 1; j <=2*i-1; j++) {
      cout << "*";
    }
    cout << "\n";
  }
}
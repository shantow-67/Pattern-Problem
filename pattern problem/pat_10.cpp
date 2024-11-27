#include <iostream>
using namespace std;

// problem no 10

int main() {
  for (int i = 1; i <= 2*n-1; i++) {

    if(i<=n){
      for (int j = 1; j <= i; j++) {
        cout << "* ";
      }
    }else{
      for (int j = 2*n-i; j >=1; j--) {
        cout << "* ";
      }
    }
    cout << "\n";
  }
}
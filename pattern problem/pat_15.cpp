#include <iostream>
using namespace std;


// problem no 15

int main() {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <n-i; j++) {
      cout << alpha[j]<<" ";
    }
    cout << "\n";
  }
}
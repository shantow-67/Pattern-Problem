#include <iostream>
using namespace std;
// problem no 14
int n=5;
string alpha = "ABCDE";

int main() {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <=i; j++) {
      cout << alpha[j]<<" ";
    }
    cout << "\n";
  }
}
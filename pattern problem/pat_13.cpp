#include <iostream>
using namespace std;
// problem no 13
int count = 1;

int main() {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << count<<" ";
      count++;
    }
    cout << "\n";
  }
}
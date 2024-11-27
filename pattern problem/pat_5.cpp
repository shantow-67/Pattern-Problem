#include <iostream>
using namespace std;

// problem no 5

int main() {
  for (int i = 1; i <= n; i++) {
    for (int j = n; j >=i; j--) {
      cout << "* ";
    }
    cout << "\n";
  }
}



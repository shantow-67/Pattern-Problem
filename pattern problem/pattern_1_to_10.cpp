#include <iostream>
using namespace std;

// problem link==>

// https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa/

// problem no 1

int n=5;
int main() {
  for(int i=1;i<=n;i++){
    for(int i=1;i<=n;i++){
      cout<<"* ";
    }
    cout<<"\n";
  }

}


// problem no 2
int main() {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }
    cout << "\n";
  }
}

// problem no 3
int main() {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << j;
    }
    cout << "\n";
  }
}

// problem no 4
int main() {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << i;
    }
    cout << "\n";
  }
}

// problem no 5

int main() {
  for (int i = 1; i <= n; i++) {
    for (int j = n; j >=i; j--) {
      cout << "* ";
    }
    cout << "\n";
  }
}

// problem no 6

int main() {
  for (int i = 0; i < n; i++) {
    for (int j = 1; j <=n-i; j++) {
      cout << j;
    }
    cout << "\n";
  }
}

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

// problem no 9
int main() {
  for (int i = 1; i <= 2*n; i++) {

    if(i<=n){
      for(int k=n-i;k>0;k--){
        cout<<" ";
      }
      for (int j = 1; j <=2*i-1; j++) {
        cout << "*";
      }
    }else{
      for(int k=1;k<i-n;k++){
        cout<<" ";
      }
      for (int j =(2*n-i)*2+1; j >=1; j--) {
        cout << "*";
      }
    }
   
    cout << "\n";
  }
}

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

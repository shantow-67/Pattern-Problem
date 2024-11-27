#include <iostream>
using namespace std;
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
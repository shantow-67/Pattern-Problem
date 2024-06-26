
//problem no 11
int n=5;
int main() {
  for (int i = 1; i <=n; i++) {

     if(i%2!=0){
       for(int j=1;j<=i;j++){
         if(j%2!=0){
           cout<<"1 ";
         }else{
           cout<<"0 ";
         }
       }
     }else{
       for(int j=1;j<=i;j++){
          if(j%2!=0){
            cout<<"0 ";
          }else{
            cout<<"1 ";
          }
        }
     }

    cout << "\n";
  }
}

// problem no 12
//this solution will be provided later

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
// problem no 15

int main() {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <n-i; j++) {
      cout << alpha[j]<<" ";
    }
    cout << "\n";
  }
}

// problem no 16

int main() {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <=i; j++) {
      cout << alpha[i]<<" ";
    }
    cout << "\n";
  }
}
// problem no 17

// problem no 18

// problem no 19
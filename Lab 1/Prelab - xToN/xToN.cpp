#include <iostream>
using namespace std;

int xton(int x, int n){
  if (n == 0){
    return 1;
  }
  return x * xton(x,n-1);
}

int main(){
  int x,n,z;
  cin >> x;
  cin >> n;

  z = xton(x,n);
  
  cout << z << endl;
  return 0;
}


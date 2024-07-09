#include <iostream>
using namespace std;
#define ll long long
  
 
int main() {
  int t; cin >> t;
  for (int i = 0; i < t; i++){
    ll n; cin >> n;
  if(n%10==9){
    cout<<"NO\n";
  }
  else{
    n=n+1;
  while (n > 9) {
    if (n % 10 == 0) {
      break;
    }
    n /= 10;
  }
  cout << (n == 1 ? "YES\n" : "NO\n");
  }
  }
  return 0;
}
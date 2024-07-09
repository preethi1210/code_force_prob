#include <iostream>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int good_prefixes=0;
        ll  sum = 0;
        ll large=0;
        for (int i = 0; i < n; i++) {
            ll val;
            cin >> val;
            sum+=val;
            large=max(large,val);
           if(sum%2==0 && (sum==0 ||( large==sum/2))){
                good_prefixes++;
            }
        }
        cout <<good_prefixes << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int ans=INT_MAX;        
        for (int i = 0; i < n-1; i++) {
            int maxi = max(arr[i],arr[i+1]);
            ans=min(maxi,ans);
        }
        cout << ans - 1 << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<int> vec;
        int prev = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] < prev) {
                vec.push_back(prev - arr[i]);
            }
            else{
            prev = arr[i];}
        }

        ll ans = 0;
        sort(vec.begin(), vec.end());
        prev = 0;
        ll l = vec.size();
        for (ll i = 0; i < l; i++) {
            ll val = (l - i+1) * (vec[i] - prev);
            ans += val;
            prev = vec[i];
        }

        cout << ans << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <string>

#define ll long long
using namespace std;

bool check(ll temp1) {
    bool flag1 = true;
    while (temp1 && flag1) {
        int val = temp1 % 10;
        if (val < 5) {
            flag1 = false;
        }
        temp1 = temp1 / 10;
    }
    return flag1;
}

bool fun(int idx, ll sum, ll val1, vector<int>& dp, int l) {
    if (val1 > sum) {
        return false;
    }
    if (dp[idx] != -1) {
        return dp[idx][sum];
    }
    if (idx == l - 1) {
        return dp[idx] = check(sum - val1);
    }
    for (int i = 5; i <= 9; i++) {
        if (fun(idx + 1, sum, val1 * 10 + i, dp, l)) {
            return dp[idx] = true;
        }
    }
    return dp[idx][sum] = false;
}

int main() {
   // vector<int>test_cases = {1337, 200, 1393938, 1434, 420, 1984, 10, 69, 119};
    //vector<string>expected_outputs = {"YES", "NO", "YES", "YES", "NO", "YES", "YES", "NO", "NO"};
    
    int t = 9;
    for (int i = 0; i < t; ++i) {
        ll sum ;cin>>sum;
        int l = 0;
        ll temp = sum;
        while (temp) {
            temp = temp / 10;
            l++;
        }
        vector<vector<int> > dp(l, -1);
        if (fun(0, sum, 0, dp, l)) {
            cout << "Test case " << (i+1) << ": " << "YES" ;
            //<< " (Expected: " << expected_outputs[i] << ")" << endl;
        } else {
            cout << "Test case " << (i+1) << ": " << "NO";
            // << " (Expected: " << expected_outputs[i] << ")" << endl;
        }cout<<endl;
    }
    return 0;
}

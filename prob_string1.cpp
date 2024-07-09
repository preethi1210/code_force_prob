#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        
        vector<int> arr(m);
        for (int i = 0; i < m; i++) {
            cin >> arr[i];
        }
        
        string c;
        cin >> c;
        
        sort(c.begin(), c.end());
        sort(arr.begin(), arr.end());
        
        for (int i = 0; i < m; i++) {
            s[arr[i] - 1] = c[i];
        }
        
        cout << s << endl;
    }
    return 0;
}

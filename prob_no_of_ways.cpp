#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n <= 2) {
        cout << 0;
        return 0;
    }

    vector<long long> prefixSum(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefixSum[i + 1] = prefixSum[i] + arr[i];
    }

    unordered_map<long long, int> rightSumCount;
    for (int i = 1; i < n; i++) {
        rightSumCount[prefixSum[n] - prefixSum[i]]++;
    }

    int ans = 0;
    unordered_map<long long, int> leftSumCount;

    for (int j = 1; j < n - 1; j++) {
        rightSumCount[prefixSum[n] - prefixSum[j]]--;

        if (prefixSum[j] % 3 == 0) {
            long long targetSum = prefixSum[j] / 3;
            if (leftSumCount[targetSum] > 0 && rightSumCount[targetSum] > 0) {
                ans += rightSumCount[targetSum];
            }
        }

        leftSumCount[prefixSum[j]]++;
    }

    cout << ans;
    return 0;
}

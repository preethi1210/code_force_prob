#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool canCollectCoin(int x, int y) {
    // Calculate relative positions
    int dx = x;
    int dy = y;
    
    // Check all 8 possible movements
    vector<pair<int, int>> possibleMoves = {
        {dx, dy + 1},      // move up
        {dx + 1, dy + 1},  // move up-right
        {dx + 1, dy},      // move right
        {dx + 1, dy - 1},  // move down-right
        {dx, dy - 1},      // move down
        {dx - 1, dy - 1},  // move down-left
        {dx - 1, dy},      // move left
        {dx - 1, dy + 1}   // move up-left
    };
    
    // Check if any move can collect the coin
    for (auto& move : possibleMoves) {
        int mx = move.first;
        int my = move.second;
        
        if (abs(mx - dx) <= 1 && my <= dy && dy < my + 1) {
            return true;
        }
    }
    
    return false;
}

vector<string> canCollectCoins(int n, vector<pair<int, int>>& coins) {
    vector<string> results;
    
    for (auto& coin : coins) {
        int x = coin.first;
        int y = coin.second;
        
        if (canCollectCoin(x, y)) {
            results.push_back("YES");
        } else {
            results.push_back("NO");
        }
    }
    
    return results;
}

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> coins(n);
    for (int i = 0; i < n; ++i) {
        cin >> coins[i].first >> coins[i].second;
    }
    
    vector<string> results = canCollectCoins(n, coins);
    
    for (auto& result : results) {
        cout << result << endl;
    }
    
    return 0;
}

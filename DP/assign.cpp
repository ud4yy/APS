#include <bits/stdc++.h>

using namespace std;

bool isBitNotSet(int num, int x) {
    int mask = ~(1 << x);
    return (num & mask) == num; 
}

unsigned int countSetBits(int num) {
    int count = 0;
    while (num > 0) {
        count += num & 1; 
        num >>= 1; 
    }
    return count;
}

int assign(int n, int cost[][3]) {
    int s = pow(2,n); 
    vector<int> dp(s, INT_MAX); 
    dp[0] = 0; 
    for (int i = 0; i < s; i++) {
        int x = countSetBits(i);
        for (int j = 0; j < n; j++) {
            if (isBitNotSet(i, j)) {
                dp[i | (1 << j)] = min(dp[i | (1 << j)], dp[i] + cost[x][j]);
            }
        }
    }
    return dp[s - 1]; 
}

int main() {
    int cost[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> cost[i][j];
        }
    }
    int final = assign(3, cost);
    cout << final << endl;
    return 0;
}

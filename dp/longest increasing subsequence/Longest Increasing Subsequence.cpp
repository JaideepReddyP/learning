// leetcode - 300. Longest Increasing Subsequence
#include <bits/stdc++.h>
using namespace std;

int dp_sol(int n, vector<int> a) {
    vector<int> dp(n, 1);
    for(int i = n-1; i >= 0; i--) {
        for(int j = i+1; j < n; j++) {
            if(a[i] < a[j]) dp[i] = max(dp[i], 1+dp[j]);
        }
    }
    return *max_element(dp.begin(), dp.end());
}

int greedy_bin_search_sol(int n, vector<int> a) {
    vector<int> dp;
    for(int i = 0; i < n; i++) {
        if(dp.empty() || dp.back() < a[i]) dp.push_back(a[i]);
        else {
            auto it = lower_bound(dp.begin(), dp.end(), a[i]);
            *it = a[i];
        }
    }
    return dp.size();
}

int greedy_bin_search_const_memo_sol(int n, vector<int> a) {
    int p = 0;
    for(int i = 0; i < n; i++) {
        if(p <= 0 || a[p-1] < a[i]) {
            a[p] = a[i];
            p++;
        } else {
            auto it = lower_bound(a.begin(), a.begin()+p, a[i]);
            *it = a[i];
        }
    }
    return p;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    // cout << dp_sol(n, a); // time: O(n^2) // space O(n) 

    // cout << greedy_bin_search_sol(n, a); // O(n*log(n)) // space O(n)

    cout << greedy_bin_search_const_memo_sol(n, a); // O(n*log(n)) // space O(1)

}
// dp solution
// reccursively call for max weight of current_request included and when not included

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> requests;
map<int,int> dp;

int by_second(vector<int> &a, vector<int> &b) {
    return a[1] < b[1];
}

int max_weight(int i) {
    if(i >= requests.size()) return 0;
    if(dp[i]) return dp[i];
    int i_next = i+1;
    while((i_next < requests.size()) && (requests[i][1] > requests[i_next][0])) i_next++; 
    dp[i] = max((requests[i][2] + max_weight(i_next)), max_weight(i+1));
    return dp[i];
}

int main(){
    int t;
    cin >> t;
    int start, finish, weight;
    while(t--) {
        cin >> start;
        cin >> finish;
        cin >> weight;
        requests.push_back({start, finish, weight});
    }

    sort(requests.begin(), requests.end());

    cout << max_weight(0);
}
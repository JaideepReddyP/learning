// dp solution
// -------------------------------- find sol

#include<bits/stdc++.h>
using namespace std;

map<int,int> dp = {{0,0}};
vector<vector<int>> max_weight_requests;

int by_second(vector<int> &a, vector<int> &b) {
    return a[1] < b[1];
}

int max_weight(vector<vector<int>> requests, int s) {
    if(dp[s] != 0) return dp[s];
    int next_request = s;
    while(requests[next_request][0] < requests[s][1]) 
    return max(requests[s][2]+max_weight(requests, ))
}

int main(){
    int t;
    cin >> t;
    int start, finish, weight;
    vector<vector<int>> requests;
    while(t--) {
        cin >> start;
        cin >> finish;
        cin >> weight;
        requests.push_back({start, finish, weight});
    }

    sort(requests.begin(), requests.end(), by_second);

    cout << max_weight(requests, requests[0][0]);
}
// this is a direct greedy algorithm
// sort by finish time and then greedy pick first compatible request

#include<bits/stdc++.h>
using namespace std;

int by_second(pair<int,int> &a, pair<int,int> &b) {
    return a.second < b.second;
}

int main(){
    int t;
    cin >> t;
    pair<int, int> in;
    vector<pair<int, int>> requests;
    while(t--) {
        cin >> in.first;
        cin >> in.second;
        requests.push_back(in);
    }

    sort(requests.begin(), requests.end(), by_second);

    int current_finish_time = requests[0].second;
    vector<pair<int, int>> non_overlapping_requests;
    non_overlapping_requests.push_back(requests[0]);
    for(int i = 1; i < requests.size(); i++) {
        if(requests[i].first >= current_finish_time) {
            non_overlapping_requests.push_back(requests[i]);
            current_finish_time = requests[i].second;
        }
    }
    

    for(pair<int,int> a : non_overlapping_requests) {
        cout << a.first << ' ' << a.second << '\n';
    }
}
// for a given point the shorter dist should be within the box (x-d, x) and (y-d, y+d)
// TODO implementation
#include <bits/stdc++.h>
using namespace std;

int dist(pair<int,int> a, pair<int,int> b) {
    return ((a.first-b.first)*(a.first-b.first))+((a.second-b.second)*(a.second-b.second));
}

int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> a(n);
    for(int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;

    sort(a.begin(), a.end());

    int d = INT_MAX;
    set<pair<int,int>> box;
    box.insert(a[0]);
    int left = 0;
    for(int i = 1; i < n; i++) {
        while(left < i && a[left].first - a[i].first <  )
    }
}
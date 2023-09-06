// rank + median of median algo
// ---------------------------------------- to solve

#include<bits/stdc++.h>
using namespace std;

int select(vector<int> A, int rank) {
    if(A.size() == 1) return A[0];
    int x = A[0];
    int rank_x = 0;
    vector<int> B, C;
    for(int i = 0; i < A.size(); i++) {
        if(A[i] < x){
            B.push_back(A[i]);
            rank_x++;
        }
        else if(A[i] > x) C.push_back(A[i]);
    }
    if(rank_x == rank) return x;
    else if(rank_x > rank) return select(B, rank);
    else return select(C, rank-rank_x);
}

int main() {
    vector<int> arr;
    int a, t;
    cin >> t;
    while(t--) {
        cin >> a;
        arr.push_back(a);
    }

    cout << select(arr, (arr.size()-1)/2);
}
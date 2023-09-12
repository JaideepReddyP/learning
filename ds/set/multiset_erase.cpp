#include<bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> s = {1, 2, 3, 3, 3, 4};
    s.erase(s.find(3));
    for(int i: s) cout << i << ' ';
    cout << endl;

    s.erase(3);
    for(int i: s) cout << i << ' ';
    cout << endl;
}
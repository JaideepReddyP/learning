#include<bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
    s.insert(0);
    s.insert(10);
    cout << *s.lower_bound(5);
}
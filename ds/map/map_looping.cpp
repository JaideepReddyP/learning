#include<iostream>
#include<map>

using namespace std;

int main() {
    map<int, int> m;
    m[1] = 2;
    m[3] = 4;
    m[44] = 45;

    for(auto i : m) {
        cout << i.first << ' ' << i.second << '\n';
    }
}
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll ;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t = 1;
    while (t--) {
        set<int> s;
        for (int i = 0; i < 3; ++i) {
            int x;
            cin>>x;
            s.insert(x);
        }
        cout<<s.size();
        cout << "\n";
    }
}
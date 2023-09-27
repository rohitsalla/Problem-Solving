#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int a[3];
void solve(){
    for (int i = 0; i < 3; i++)  cin>>a[i];
    sort(a,a+3);
    puts(a[0]+a[1]==a[2] ? "Yes" : "No");
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
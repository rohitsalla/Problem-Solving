#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll ;
signed main(){
    int n,k,x,y;
    cin>>n>>k>>x>>y;

    ll s = 0;
    if(n<=k){
        s += n*x;
    }
    else {
        s += k*x + (n-k)*y;
    }
    cout<<s<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"


int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string a,b,c;
    cin>>a>>b>>c;
    if (a[a.size()-1]==b[0] && b[b.size()-1]==c[0]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
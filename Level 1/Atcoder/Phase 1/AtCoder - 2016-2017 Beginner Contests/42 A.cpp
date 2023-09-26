#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a==5 and b==5 and c==7) or
    (a==7 and b==5 and b==5) or
    (a==5 and b==7 and c==5)){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

//    int t;
//    cin>>t;
//    while(t--){
        solve();
//  //  return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"


int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string a,b,c;
    cin>>a>>b>>c;
    string ans;
    ans += (char) (a[0]-'a'+'A');
    ans += (char) (b[0]-'a'+'A');
    ans += (char) (c[0]-'a'+'A');
    cout<<ans<<endl;
    return 0;
}
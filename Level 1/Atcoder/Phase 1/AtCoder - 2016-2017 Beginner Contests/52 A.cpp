#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"


int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<max(a*b,c*d)<<endl;

    return 0;
}
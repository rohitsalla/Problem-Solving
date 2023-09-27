#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"


int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int x,y;
    cin>>x>>y;
    map<int,int> g;
    g[1] = g[3] = g[5] = g[7] = g[8] = g[10] = g[12] = 1;
    g[4] = g[6] = g[9] = g[11] = 2;
    g[2] = 3;
    if(g[x] == g[y]) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
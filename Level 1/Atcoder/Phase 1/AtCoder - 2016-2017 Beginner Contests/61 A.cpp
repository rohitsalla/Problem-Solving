#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"


int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    if(a<=c and c<=b){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
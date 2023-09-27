#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    if(b-a==c-b){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
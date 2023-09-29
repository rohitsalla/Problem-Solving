#include <bits/stdc++.h>
using namespace std;

int a,b,c;
int main(void) {
    cin>>a>>b>>c;
    if(c >= a && c <= a+b) cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
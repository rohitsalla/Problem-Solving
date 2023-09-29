#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a,b,x;
    while (cin>>x>>a>>b){
        x -= a;
        cout<<x%b<<endl;
    }
    return 0;
}
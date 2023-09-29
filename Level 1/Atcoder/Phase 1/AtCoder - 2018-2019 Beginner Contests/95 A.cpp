#include <bits/stdc++.h>
using namespace std;


int main(void) {
    int sum  = 700;
    string s;
    cin>>s;
    for (int i = 0; i < 3; i++) {
        if(s[i]=='o') sum += 100;
    }
    cout<<sum<<endl;
    return 0;
}
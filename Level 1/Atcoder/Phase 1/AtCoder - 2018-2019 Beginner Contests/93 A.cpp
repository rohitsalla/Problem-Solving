#include <bits/stdc++.h>
using namespace std;

char a[5];
int main(void) {
    for (int i = 0; i < 3; i++) {
        cin>>a[i];
    }
    sort(a,a+3);
    for(int i = 0;i<3;i++){
        if(a[i] != 'a'+i) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}
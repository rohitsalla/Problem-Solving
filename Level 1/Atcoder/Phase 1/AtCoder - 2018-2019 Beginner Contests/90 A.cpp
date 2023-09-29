#include <bits/stdc++.h>
using namespace std;

char a[3][3];

int main(void) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        cout<<a[i][i];
    }
    cout<<endl;
    return 0;
}
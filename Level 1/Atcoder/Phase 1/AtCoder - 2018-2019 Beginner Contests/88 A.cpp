#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n,a;
    while(cin>>n>>a){
        if(n<=a){
            cout<<"Yes"<<endl;
        }
        else{
            for (int i = 0; i <=a; i++) {
                if((n-i)%500 == 0){
                    cout<<"Yes"<<endl;
                    return 0;
                }
            }
            cout<<"No"<<endl;
            return 0;
        }
    }
}
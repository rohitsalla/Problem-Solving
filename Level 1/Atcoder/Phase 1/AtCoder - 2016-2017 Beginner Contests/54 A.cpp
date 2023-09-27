#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"


int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   int n,m;
   cin>>n>>m;
   if(n==1){
       n = 14;
   }
   if(m==1){
       m = 14;
   }
   if(n==m){
       cout<<"Draw"<<endl;
   }
   else if(n<m){
       cout<<"Bob"<<endl;
   }
   else{
       cout<<"Alice"<<endl;
   }
    return 0;
}
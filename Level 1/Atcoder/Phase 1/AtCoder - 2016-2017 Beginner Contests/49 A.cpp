#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"


void solve(){
   char c = getchar();
    puts(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ? "vowel" : "consonant");
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    solve();
    return 0;
}
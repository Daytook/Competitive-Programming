#include <bits/stdc++.h>
#define ll long long
using namespace std;

string to_string(vector<bool> v) { bool first = true; string res = "["; for (int i = 0; i < static_cast<int>(v.size()); i++) {if (!first) { res += ", ";} first = false; res += to_string(v[i]);} res += "]"; return res;}
template <typename A>
string to_string(A v) { bool first = true; string res = "["; for (const auto &x : v) { if (!first) {res += ", "; } first = false; res += to_string(x);} res += "]"; return res;}

void solve(){
    int n; cin>>n;
    ll ans =1;
    while(n>0){
        ans*=5;
        n--;
    }
    cout<<ans<<endl;

}


int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    long t = 1;
    for (int i = 1; i <= t; i++) {
        solve();
    }
}


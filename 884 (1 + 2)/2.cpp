// ============================================================================ //
// ||                                                                        || //
// ||             College of Engineering Guindy, Anna University             || //
// ||                           Watashi no namae wa                          || //
// ||                              Suren Yeager                              || //
// ||                                                                        || //
// ============================================================================ //

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define do double
#define fr(i, a, n) for(ll i = a; i < n; i++)
#define frr(i, a, n) for(ll i = a; i >= n; i--)
#define ret(s) {cout<<s<<endl; return;}
#define vi vector<ll>

void solve(){
    ll n;
    cin>>n;
    vi v(n);
    v[0] = 2, v.back() = 3, v[n / 2] = 1;
    ll c = 4;
    fr(i, 0, n){
        if(v[i]) cout<<v[i]<<" ";
        else cout<<c++<<" ";
    }
    cout<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}
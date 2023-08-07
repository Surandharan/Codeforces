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

void solve(){
    ll a, b;
    cin>>a>>b;
    if(a == 1 and b == 2) ret(3)
    if(a == 1) ret(2)
    ret(a - 1)
    
}

int main(){
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}
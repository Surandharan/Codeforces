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
#define vvi vector<vector<ll>>

void solve(){
    ll n, odd = 0, even = 0, maxi = INT_MIN;
    cin>>n;
    vi v(n);
    fr(i, 0, n) {
        cin>>v[i];
        if(i % 2) odd += max(0LL, v[i]);
        else even += max(0LL, v[i]);
        maxi = max(maxi, v[i]);
    }
    if(n == 1) ret(v[0]);
    if(max(even, odd) == 0) ret(maxi)
    ret(max(even, odd))
}

int main(){
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}
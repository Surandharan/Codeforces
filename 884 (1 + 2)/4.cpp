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
#define ret(str) {cout<<str<<endl; return;}
#define vi vector<ll>
#define vc vector<char>
#define vvi vector<vector<ll>>

void solve(){
    ll n, k;
    cin>>n;
    string res;
    k = n;
    fr(i, 2, n){
        if(n % i){
            k = i;
            break;
        }
    }

    ll ind = 0;
    fr(i, 0, n){
        res += ind++ + 'a';
        ind %= k;
    }
    ret(res)
}

int main(){
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}
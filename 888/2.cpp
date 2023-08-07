#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define do double
#define fr(i, a, n) for(ll i = a; i < n; i++)
#define frr(i, a, n) for(ll i = a; i >= n; i--)
#define ret(s) {cout<<s<<endl; return;}
#define umap unordered_map
#define uset unordered_set
#define pqu(x) priority_queue<x>
#define pqg(x) priority_queue<x, vector<x>, greater<x>>
#define upper upper_bound
#define lower lower_bound
#define all(a) begin(a),end(a)
#define sz(X) (ll)((X).size())
#define ins(x) insert(x)
#define pb push_back
#define vi vector<ll>
#define vvi vector<vi>
#define vp vector<pair<ll,ll>>
#define vs vector<string> 
#define vc vector<char>
#define vvc vector<vc>

const ll MOD = 1e9 + 7;

void solve(){

    ll n;
    cin>>n;
    vi v(n);
    fr(i, 0, n) cin>>v[i];

    vi a, b;
    fr(i, 0, n){
        if(v[i] % 2 == 0) a.pb(v[i]);
        else b.pb(v[i]);
    }

    sort(all(a)), sort(all(b));
    ll c = 0, d = 0;

    fr(i, 0, n){
        if(v[i] % 2 == 0) v[i] = a[c++];
        else v[i] = b[d++];
    }

    if(is_sorted(all(v))) ret("YES")
    ret("NO")
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    for(int i = 1; i <= t; i++){
        // cout<<"#"<<i<<":"<<endl;
        solve();
    }
    return 0;
}
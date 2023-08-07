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

ll f(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * f(n - 1);
}

void solve(){
    ll n;
    cin>>n;
    vp v(n);
    umap<ll,ll> x, y, main, sec;
    ll res = 0;
    fr(i, 0, n){
        ll a, b;
        cin>>a>>b;
        v[i] = {a, b};
        x[a]++, y[b]++;
        main[b - a]++, sec[a + b]++;
    }
    for(auto it : x){
        if(it.second > 1) {
            // cout<<it.first<<" x"<<endl;
            res += it.second * (it.second - 1);
        }
    }
    for(auto it : y){
        if(it.second > 1) {
            // cout<<it.first<<" y"<<endl;
             res += it.second * (it.second - 1);
        }
    }
    for(auto it : main){
        if(it.second > 1) {
            // cout<<it.first<<" main"<<endl;
             res += it.second * (it.second - 1);
        }
    }
    for(auto it : sec){
        if(it.second > 1) {
            // cout<<it.first<<" sec"<<endl;
             res += it.second * (it.second - 1);
        }
    }
    ret(res)
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
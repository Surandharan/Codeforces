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

const ll MOD = 1e9 + 7;

void solve(){
    ll n;
    cin>>n;
    vi v(n), res;
    fr(i, 0, n) cin>>v[i];
    if(n == 1){
        cout<<1<<endl;
        return;
    }
    ll maxVal = (v[0] == n) ? n - 1 : n;
    ll fl = 0, maxInd = 0;
    fr(i, 1, n) {
        if(v[i] == maxVal){
            maxInd = i;
            fl = 1;
        }
        if(fl) res.push_back(v[i]);
    }
    maxInd--;
    if(maxInd != n - 2){
        res.push_back(v[maxInd]);
        maxInd--;
    }
    ll ind = maxInd, l = 0, r = ind;
    while(l < r){
        if(v[r] > v[l]) res.push_back(v[r--]);
        else break;
    }
    fr(i, l, r + 1) res.push_back(v[i]);
    fr(i, 0, res.size()) cout<<res[i]<<" ";
    cout<<endl;
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
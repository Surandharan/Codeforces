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
    ll n, m;
    cin>>n>>m;
    vi v(n);

    fr(i, 0, n) cin>>v[i];
    umap<ll, multiset<ll, greater<ll>>> mp;
    umap<ll,ll> prev;

    fr(i, 0, n){
        ll col = v[i];
        if(mp.count(col) == 0){
            mp[col].insert(i);
        }
        else {
            mp[col].insert(i - prev[col] - 1);
        }
        prev[col] = i;
    }

    ll res = n;
    for(auto &it : mp){
        ll col = it.first;
        auto v = it.second;
        v.insert(n - prev[col] - 1);
        ll maxi = *v.begin();
        v.erase(v.begin());
        v.insert(maxi / 2);
        res = min(*v.begin(), res);        
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
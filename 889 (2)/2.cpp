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

ll solve(ll i, ll ch, vi &v, ll n, vvi &dp) {
    if (i >= n) {
        if (ch != 1) return 0;
        return 1e9;
    }
    if (dp[i][ch] != -1) return dp[i][ch];
    ll res = 1e9;
    if(!ch){
        res = min(res, 1 + solve(i + 1, 0, v, n, dp));
        if (i < n - 1 && v[i + 1] != 0) res = min(res, solve(i + 1, 1, v, n, dp));
        if (v[i]) res = min(res, 1 + solve(i + 1, 2, v, n, dp));
    }
    else if (ch == 1) {
        if (v[i] == 1) res = min(res, 1 + solve(i + 1, 0, v, n, dp));
        else res = min(res, 1 + solve(i + 1, 2, v, n, dp));
        if (i < n - 1 && v[i + 1] != 0) res = min(res, solve(i + 1, 1, v, n, dp));
    }
    else {
        if (v[i]) res = min(res, solve(i + 1, 2, v, n, dp));
        res = min(res, solve(i + 1, 0, v, n, dp));
    }
    return dp[i][ch] = res;
}

void solve() {
    ll n;
    cin >> n;
    vi v(n);
    fr(i, 0, n) cin >> v[i];
    vvi dp(n, vi(3, -1));
    ret(solve(0, 0, v, n, dp));
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t;
    t = 1;
    for(int i = 1; i <= t; i++){
        // cout<<"#"<<i<<":"<<endl;
        solve();
    }
    return 0;
}

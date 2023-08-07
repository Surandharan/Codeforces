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
    ll n, k;
    cin>>n>>k;

    vi v(n);
    fr(i, 0, n) cin>>v[i];

    if(v.front() == v.back()){
        ll c = 0;
        fr(i, 0, n){
            if(v[i] == v.back()){
                c++;
                if(c % k == 0) ret("YES")
            }
        }
        ret("NO")
    }

    ll f = -1, c = 0;
    fr(i, 0, n){
        if(v[i] == v.front()) {
            c++;
            if(c % k == 0){
                f = i;
                break;
            }
        }
    }

    if(f == -1) ret("NO")
    c = 0;

    fr(i, f + 1, n){
        if(v[i] == v.back()){
            c++;
            if(c % k == 0){
                ret("YES")
            }
        }
    }

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
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

bool check(ll init, vi &v, ll n){
    vi vis(n + 1);
    ll prev = init;
    fr(i, 0, n - 1){
        ll curr = v[i] - init;
        if(curr > n) return false;
        init = v[i];
    }
    cout<<endl;
    return true;
}

void solve(){
    ll n;
    cin>>n;
    vi v(n - 1), vis(n + 1);
    set<ll> st;
    fr(i, 0, n - 1) {
        cin>>v[i];
        st.insert(i + 1);
    }
    st.insert(n);

    ll ch = 1, l = -1;
    
    if(st.count(v[0])) st.erase(v[0]);
    else{
        l = v[0];
    }

    fr(i, 1, n - 1){
        ll d = v[i] - v[i - 1];
        if(st.count(d)) st.erase(d);
        else {
            if(l == -1) l = d;
            else {
                ch = 0;
                break;
            }
        }
    }

    if(!ch) ret("NO")
    ll s = 0;
    for(auto &i : st) s += i;
    if(l == -1){
        ll need = n * (n + 1) / 2;
        if(need - v.back() == s) ret("YES")
        ret("NO")
    }
    if(s == l) ret("YES")
    ret("NO")

    // if(v.front() <= n){
    //     ll prev = v.front();
    //     ll fl = 0, greater = 0;
    //     vis[v.front()] = 1;
    //     fr(i, 1, n - 1){
    //         ll curr = v[i] - prev;
    //         // cout<<curr<<" ";
    //         if(curr > n){
    //             if(fl) ret("NO")
    //             greater = curr;
    //             fl = 1;
    //         }
    //         else vis[curr] = 1;
    //         prev = v[i];
    //     } 
    //     if(greater == 0) ret("YES")
    //     ll sum = 0;
    //     fr(i, 1, n + 1){
    //         if(vis[i] == 0){
    //             sum += i;
    //         }
    //     }
    //     if(sum == greater) ret("YES")
    //     ret("NO")
    // }
    // else{
    //     fr(i, 1, n / 2){
    //         if(check(i, v, n)) ret("YES")
    //     }
    //     ret("NO")
    // }
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
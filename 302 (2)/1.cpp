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
    ll k;
    string s;
    cin>>k>>s;
    vs v;

    // edge case
    if(k == 1){
        cout<<"YES"<<endl;
        ret(s)
    }

    ll n = s.length(), len = k;
    ll fl = (k > 1) ? 0 : 1;
    vi mp(26);
    string curr;
    curr += s[0];
    mp[s[0] - 'a']++;
    fr(i, 1, n){
        if(!mp[s[i] - 'a']){
            mp[s[i] - 'a']++;
            v.pb(curr);
            k--;
            if(k == 1){
                v.pb(s.substr(i));
                break;
            }
            curr = "";
        }
        curr += s[i];
    }

    if(sz(v) == len) {
        cout<<"YES"<<endl;
        fr(i, 0, len) cout<<v[i]<<endl;
    }
    else{
        ret("NO")
    }


}

int main(){
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
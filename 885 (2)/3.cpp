#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fr(i, a, n) for(ll i = a; i < n; i++)
#define ret(s) {cout<<s<<endl; return;}

const ll MOD = 1e9 + 7;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    fr(i, 0, n) cin >> a[i];
    fr(i, 0, n) cin >> b[i];

    vector<ll> c(n);

    fr(i, 0, n) {
        if(b[i] == 0) continue;
        c[i] = log(double(max(a[i], b[i]))) / log(2.00);
        c[i] %= 3;
    }

    ll elem = c[0];
    fr(i, 1, n) {
        if (elem != c[i]) {
            ret("NO");
        }
    }
    ret("YES");
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
#define all(t) t.begin(), t.end()
#define rall(t) t.rbegin(), t.rend()
#define forr(x, n) for (int i = x; i < n; i++)
#define ff first
#define ss second
#define pb push_back
#define nl '\n'
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                 \
    cout.tie(0);
 
const double PI = 3.141592653589793238462643383279502884197;
const int N = (int)1e6 + 5;
const ll inf = (ll)1e18 + 5;
const int mod = (int)1e9 + 7;

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.first==b.first)
        return a.second>b.second;
    return a.first<b.first;
}
map<ll,vector<ll>>mp;
map<ll,ll>dp;

ll dpp(ll n){
    if(dp.count(n))
        return dp[n];
    ll ans = n;
    if(mp.count(n)){
        for(auto i : mp[n]){
            ll curr = n + i-1;
            ans = max(ans,dpp(curr));
        }
    }
    return dp[n] = ans;
}

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++)
        cin>>v[i];
    for(int i = 1; i < n; i++){
        mp[v[i] + i].pb(i+1);
    }
    cout<<dpp(n)<<nl;
    dp.clear();
    mp.clear();
}


int main(){
    faster;
    //#ifndef ONLINE_JUDGE
    //freopen("", "r", stdin);
    //freopen("", "w", stdout);
    //#endif
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

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


void solve(){
    ll n;
    cin>>n;
    vector<int> v(n);
    for(auto &i : v)
        cin>>i;
    if(n<3){
        cout<<-1<<nl;
        return;
    }
    ll sum = accumulate(all(v), 0LL);
    sort(all(v));
    ll target = v[n/2] * 2 * n + 1;
    if(sum>=target)
        cout<<0<<nl;
    else    cout<<target - sum<<nl;
}


int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

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
    ll n, k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(all(v));
    if(n>=k)    cout<<k<<nl;
    else{
        ll press = 0, each = 0, sum = 0;
        for(int i = 0; i < n; i++){
            v[i] -= each;
            ll left = v[i]*(n-i);
            if((sum + left) >= k){
                press += (k-sum);
                cout<<press<<nl;
                return;
            }
            press += (left + 1);
            each += v[i];
            sum += left;
            // cout<<press<<" "<<sum<<nl;
        }
    }
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

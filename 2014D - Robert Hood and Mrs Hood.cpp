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
    ll n, d, k;
    cin>>n>>d>>k;
    vector<int> v(n+1, 0);
    vector<int> start(n+1,0);
    for(int i = 1; i <= k; i++){
        ll l, r;
        cin>>l>>r;
        v[l-1]++;
        v[r]--;    
        start[l-1]++;
    }  
    for(int i = 1; i <= n; i++){
        v[i] += v[i-1];
        start[i] += start[i-1];
    }


    int brother = 0, mother = 0;
    int maxx = -1, mini = INT_MAX;
    for(int i = 0; i < n-d+1; i++){
        ll tot = start[i+d-1] - start[i];
        tot += v[i];
        if(maxx<tot){
            maxx = tot;
            brother = i+1;
        }
        if(mini>tot){
            mini = tot;
            mother = i+1;
        }
    }
    cout<<brother<<" "<<mother<<nl;
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

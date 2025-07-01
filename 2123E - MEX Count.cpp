#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define int long long int
 
#define all(t) t.begin(), t.end()
#define rall(t) t.rbegin(), t.rend()
#define forr(x, n) for (int i = x; i < n; i++)
#define ff first
#define ss second
#define debug(a) cerr << #a << " = " << (a) << nl;
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
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin>>v[i];
    vector<int> cnt(n+1, 0);
    for(int i = 0; i < n; i++){
        cnt[v[i]]++;
    }
    vector<int> ans(n+2, 0);
    int mex = 0;
    sort(all(v));
    for(int i = 0; i < n; i++){
        if(v[i] == mex){
            mex++;
        }
    }
    int boro = n;
    int extra = 0;
    for(int i = 0; i <= mex; i++){
        int mini = cnt[i];
        boro -= mini;
        int maxi = boro + extra + mini;
        if(mini > 1)    extra += (mini - 1);
        ans[mini]++;
        ans[maxi+1]--;
    }
    for(int i = 1; i <= n; i++){
        ans[i] += ans[i-1];
    }
    for(int i = 0; i <= n; i++){
        cout<<ans[i]<<" \n"[i==n];
    }
}


int32_t main(){
    faster;
    //#ifndef ONLINE_JUDGE
    //freopen("", "r", stdin);
    //freopen("", "w", stdout);
    //#endif
    int t = 1;
    cin>>t;
    int tt = 1;
    while(t--){
        //cout<<"Case "<<tt++<<": ";
        solve();
    }
}

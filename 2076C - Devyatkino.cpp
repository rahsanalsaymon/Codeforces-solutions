#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define int long long int
 
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

bool ok(int n){
    while(n>0){
        if(n%10==7) return true;
        n/=10;
    }
    return false;
}

void solve(){
    int n;
    cin>>n;
    if(ok(n)){
        cout<<0<<nl;
        return;
    }
    int ans = 20;
    for(int i = 1; i<=10; i++){
        string s(i, '9');
        for(int j = 1; j < ans; j++){
            int curr = n + (stoll(s)*j);
            if(ok(curr)){
                ans = j;
                break;
            }
        }
    }
    cout<<ans<<nl;
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

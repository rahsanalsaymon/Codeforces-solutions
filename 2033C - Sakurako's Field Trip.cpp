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
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin>>v[i];
    ll ans = 0;
    for(int i = 0; i < n-1; i++){
        if(v[i]==v[i+1])
            ans++;
    }
    if(ans==0){
        cout<<ans<<nl;
        return;
    }
    int l = 0, r = n-1;
    while(l<r){
        if(v[l]==v[l+1]){
            int x = 1;
            if(v[l]!=v[r]){
                if(v[l]!=v[r-1]){
                    if(v[r]==v[r-1])
                        x++;
                    swap(v[l],v[r]);
                    ans-=x;
                }
            }
        }
        else if(v[r]==v[r-1]){
            int x = 1;
            if(v[l]!=v[r]){
                if(v[r]!=v[l+1]){
                    if(v[l]==v[l+1])
                        x++;
                    swap(v[l],v[r]);
                    ans-=x;
                }
            }
        }
        l++;
        r--;
    }
    cout<<ans<<nl;
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

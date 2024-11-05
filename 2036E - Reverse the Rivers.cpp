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
    int n, m, q;
    cin>>n>>m>>q;
    vector<vector<int>> v(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>v[i][j];
        }
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < m; j++){
            v[i][j] |= v[i-1][j];
        }
    }
    while(q--){
        int r;
        cin>>r;
        ll start = 0, end = n;
        for(int i = 0; i < r; i++){
            int x, y;
            char c;
            cin>>x>>c>>y;
            x--;
            if(c=='>'){
                ll low = 0, hi = n;
                while(low<hi){
                    ll mid = low + (hi - low)/2;
                    if(v[mid][x] <= y)
                        low = mid + 1;
                    else
                        hi = mid;
                }
                start = max(start , low);
            }
            else{
                ll low = 0, hi = n;
                while(low < hi){
                    ll mid = low + (hi - low)/2;
                    if(v[mid][x] < y)
                        low = mid+1;
                    else
                        hi = mid;
                }
                end = min(end , low);
            }
        }
        cout<<((start>=end)? -1 : start+1)<<nl;
    }
}


int main(){
    faster;
    //#ifndef ONLINE_JUDGE
    //freopen("", "r", stdin);
    //freopen("", "w", stdout);
    //#endif
    // int t;
    // cin>>t;
    // while(t--){
        solve();
    // }
}

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

bool cmp(pair<int,int> a, pair<int,int>b){
    if(max(a.first,a.second)==max(b.first,b.second))
        return min(a.first,a.second) <= min(b.first,b.second);
    return max(a.first,a.second)<=max(b.first,b.second);
}
void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i = 0; i < n; i++){
        int x, y;
        cin>>x>>y;
        v.pb({x,y});
    }
    sort(all(v) , cmp);
    for(auto p : v){
        cout<<p.first<<" "<<p.second<<" ";
    }
    cout<<nl;
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

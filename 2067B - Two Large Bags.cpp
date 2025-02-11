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


void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin>>v[i];
    sort(all(v));
    if(v[0]!=v[1]){
        cout<<"No\n";
        return;
    }
    vector<int> a, b;
    b.pb(v[0]);
    a.pb(v[1]);
    int i = 2;
    while(i<n){
        if(v[i]<=b.back()){
            v[i] = b.back()+1;
        }
        if(v[i]>b.back()){
            b.pb(v[i++]);
            if(v[i]>b.back()){
                cout<<"No\n";
                return;
            }
            else{
                a.pb(b.back());
                i++;
            }
        }
    }
    if(a==b)    cout<<"Yes"<<nl;
    else    cout<<"No"<<nl;
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

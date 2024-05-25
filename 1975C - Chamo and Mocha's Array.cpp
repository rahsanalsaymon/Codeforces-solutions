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

int median(int x,int y,int z){
    vector<int> a;
    a.push_back(x);
    a.push_back(y);
    a.push_back(z);
    sort(a.begin(),a.end());
    return a[1];
}

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    int ans = min(a[0],a[1]);
    if(n==2){
        cout<<ans<<nl;
        return;
    }
    for(int i = 0; i < n-2; i++){       
        ans = max(ans,median(a[i],a[i+1],a[i+2]));
    }
    cout<<ans<<nl;
}


int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

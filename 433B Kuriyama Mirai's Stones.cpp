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

}


int main(){
    faster;
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    ll sum[n+1];
    ll sortsum[n+1];
    sum[0] = sortsum[0] = 0;
    for(int i = 1; i <=n; i++)
        sum[i] = (a[i-1]+sum[i-1]);
    sort(a,a+n);
    for(int i = 1; i<=n; i++){
        sortsum[i] = (a[i-1]+sortsum[i-1]);
    }
    int q;
    cin>>q;
    while(q--){
        int x, y, z;
        cin>>x>>y>>z;
        if(x==1)
            cout<<sum[z]-sum[y-1]<<nl;
        else
            cout<<sortsum[z]-sortsum[y-1]<<nl;
    }
}

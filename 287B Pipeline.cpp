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


int main(){
    faster;
    ll n , k;
    cin>>n>>k;
    if(n==1)
        cout<<0<<nl;
    else if(n<=k){
        cout<<1<<nl;
    }
    else if(n>(k*(k-1)/2 + 1)){
        cout<<-1<<nl;
    }
    else{
        ll l = 0, r = k;
        ll maxx = k*(k-1)/2 +1;
        ll ans = -1;
        while(l<=r){
            ll mid = (l+r)/2;
            ll curr = mid*(mid-1)/2 +1;
            if(maxx-curr+1>=n){
                ans = k - mid;
                l = mid+1;
            }
            else
                r = mid-1;
        }
        cout<<ans<<nl;
    }
}

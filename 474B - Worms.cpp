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
    int sum[n+1];
    sum[0] = 0;
    for(int i = 1; i<= n; i++){
        sum[i] = a[i-1]+sum[i-1];
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        int l = 1, r = n+1;
        while(l<r){
            int mid = (l+r)/2;
            if(sum[mid]<x)
                l = mid+1;
            else
                r = mid;
        }
        cout<<l<<nl;
    }
}

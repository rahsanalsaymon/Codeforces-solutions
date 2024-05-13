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
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string s[n];
        for(int i = 0; i < n; i++)
            cin>>s[i];
        bool ok = false;
        for(char x : {'W','B'}){
            int rmin = INT_MAX, rmax = 0;
            int cmin = INT_MAX, cmax = 0;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    if(s[i][j]==x){
                        rmin = min(rmin,i);
                        rmax = max(rmax,i);
                        cmin = min(cmin,j);
                        cmax = max(cmax,j);
                    }
                }
            }
            if( cmin == 0 && rmin == 0 && cmax == (m-1) && rmax == (n-1)){
                ok = true;
                break;
            }
        }
        if(ok)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}

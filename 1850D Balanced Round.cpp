#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        sort(a, a+n);
        int ans = n-1;
        int cnt = 0, maxx = 0;
        for(int i = 0; i < n-1; i++){
            if( (a[i+1] - a[i]) <= k){
                cnt++;
            }
            else
                cnt = 0;
            maxx = max(cnt, maxx);
        }
        cout<<ans - maxx<<"\n";
    }
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<pair<int, int>> a;
        int b[n];
        int x;
        for(int i = 0; i < n; i++){
            cin>>x;
            a.push_back(make_pair(x,i));
        }
        for(int i = 0; i < n; i++){
            cin>>b[i];
        }
        sort(b, b + n);
        sort(a.begin(), a.end());
        int ans[n];

        for(int i = 0; i < n; i++){
            ans[a[i].second] = b[i];
        }
        for(int i = 0; i < n; i++){
            cout<<ans[i]<<" ";
        }
    }
}

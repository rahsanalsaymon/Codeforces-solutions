#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string s[n];
        int ans = 1e9;
        for(int i =0 ; i < n; i++){
            cin>>s[i];
        }
        for(int i = 0 ; i < n; i++){
            for(int j = i+1; j < n; j++){
                int temp = 0;
                for(int k = 0; k < m; k++){
                    temp += abs(s[i][k] - s[j][k]);
                }
                ans = min(ans, temp);
            }
        }
        cout<<ans<<endl;
    }
}

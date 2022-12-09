#include<bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int ans;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            if(i == 0){ans = a[i];}
            else{
                ans = ans & a[i];
            }
        }
        cout<<ans<<endl;
    }
}


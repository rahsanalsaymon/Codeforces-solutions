#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i = 2; i < n; i++){
            int x = pow(2,i) - 1;
            if(n%x==0){
                cout<<n/x<<"\n";
                break;
            }
        }

    }
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        bool flag = false;
        if(n%2==1){
            cout<<"YES\n";
        }
        else{
            while(n > 1){
                n /= 2;
                if((n%2==1) && n > 1){
                    flag = true;
                    break;
                }
            }
            if(flag)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
}

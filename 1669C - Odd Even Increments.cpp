#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];

        for(int i = 0; i < n ; i++){
            cin>>a[i];
        }

        int x = 0;
        for(int i = 0; i <n-2 ; i++){
            if(a[i] % 2 == 0){
                if(a[i+2] % 2 == 0){
                    continue;
                }
                else{
                    x = 1;
                    break;
                }
            }
            else{
                if(a[i+2] % 2 != 0){
                    continue;
                }
                else{
                    x = 1;
                    break;
                }
            }
        }
        if(x==0){cout<<"YES\n";}
        else{cout<<"NO\n";}
    }
}


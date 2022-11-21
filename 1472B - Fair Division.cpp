#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int count1 = 0;
        int count2 = 0;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            if(a[i]==1){count1++;}
            else{count2++;}
        }
        if(count1 % 2 != 0){
            cout<<"NO\n";
        }
        else if(count1 % 2 == 0 && count1 > 0){
            cout<<"YES\n";
        }
        else{
            if(count2 % 2 ==0){cout<<"YES\n";}
            else{cout<<"NO\n";}
        }
    }
    return 0;
}


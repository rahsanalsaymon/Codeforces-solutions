#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int x = 0;
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            if(a[i]==1){x++;}
            sum += a[i];
        }
        if(x==n){cout<<"maomao90\n";}
        else{
            sum = sum - n;

            if(sum % 2 == 0){
                cout<<"maomao90\n";
            }
            else{
                cout<<"errorgorn\n";
            }
        }
    }
}

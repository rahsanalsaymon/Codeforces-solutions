#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long l, r;
        cin>>l>>r;
        if(r % l == 0){cout<<l<<" "<<r<<endl;}
        else{
            if((r-l)<l){cout<<"-1 -1\n";}
            else{cout<<l<<" "<<l*2<<endl;}
        }
    }
}

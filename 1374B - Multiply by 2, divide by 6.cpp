#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, moves = 0;
        cin>>n;
        if(n==1){
            cout<<"0\n";
            continue;
        }
        while(n>0){
            if(n%6==0){
                n /= 6;
                moves++;
            }
            else{
                n *= 2;
                moves++;
            }
            if(n==1){
                cout<<moves<<"\n";
                break;
            }
        }
        if(n <= 0){cout<<"-1\n";}
    }
}

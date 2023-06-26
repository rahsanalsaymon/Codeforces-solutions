#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long sum = 0;
        while(n > 0){
            sum+=n;
            n = n/2;
        }
        cout<<sum<<"\n";
    }
}

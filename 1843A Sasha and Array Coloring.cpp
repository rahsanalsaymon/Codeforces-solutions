#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        sort(a,a+n);
        int cost = 0;
        for(int i = 0; i < n/2; i++){
            cost += a[n-1-i]-a[i];
        }
        cout<<cost<<"\n";
    }
}

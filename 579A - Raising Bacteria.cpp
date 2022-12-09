#include<bits/stdc++.h>
using namespace std;



int main() {
    int x;
    cin>>x;
    if(x==0){
        cout<<"0\n";
        return 0;
    }
    int ans = 0;
    while(x>1){
        if(x%2==0){
            x=x/2;
        }
        else{
            x = x-1;
            ans++;
        }
    }
    cout<<ans+1<<endl;
}


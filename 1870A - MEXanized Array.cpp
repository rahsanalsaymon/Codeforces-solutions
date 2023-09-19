#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int t;
    cin>>t;
    while(t--){
        int n, k, x;
        cin>>n>>k>>x;
        if(k>n || x<k-1)
            cout<<"-1\n";
        else{
            int sum = (k-1)*k / 2;
            for(int i = 0; i < n-k; i++){
                if(k!=x)
                    sum+= x;
                else
                    sum+= (k-1);
            }
            cout<<sum<<"\n";
        }
    }
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        long long sum = 0;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            if(a[i]<0)
                cnt++;
            sum+= abs(a[i]);
        }
        for(int i = 0; i < n; i++){
            if(a[i]<0){
                for(int j = i+1; j < n; j++){
                    i = j;
                    if(a[j]<0)
                        cnt--;
                    else if(a[j]==0)
                        continue;
                    else{
                        i = j;
                        break;
                    }
                }
            }
        }
        cout<<sum<<" "<<cnt<<"\n";
    }
}

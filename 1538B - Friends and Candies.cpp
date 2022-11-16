#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t, n, sum, h;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        sum = 0;
        h = 0;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            sum += a[i];
        }
        if (n == 1){
            cout<<"0\n";
        }
        else if (sum % n != 0){
            cout<<"-1\n";
        }
        else{
            sum = sum / n;
            for(int i = 0; i < n; i++){
                if (a[i] > sum){
                    h++;
                }
            }
            cout<<h<<endl;
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int k, a[12], cnt = 0;
    cin>>k;
    for(int i = 0; i < 12; i++){
        cin>>a[i];
    }
    if(k==0){
        cout<<cnt<<endl;
        return 0;
    }
    sort(a, a + 12);
    int x=0;
    for(int i = 11; i >= 0; i--){
        if(x>=k){
            cout<<cnt<<endl;
            return 0;
        }
        x += a[i];
        cnt++;
    }
    if(x>=k){
            cout<<cnt<<endl;
            return 0;
        }
    cout<<"-1\n";
}

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++){
        cin>>a[i];
        sum += a[i];
    }
    int mid = sum/2;
    sum = 0;
    int coin = 0;
    sort(a, a+n);
    for (int i = n-1; i >= 0; i--){
        sum += a[i];
        coin++;
        if(sum > mid){
            cout<<coin<<endl;
            return 0;
        }
    }
}

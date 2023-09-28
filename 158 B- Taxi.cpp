#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a, a+n);
    int l = 0;
    int r = n-1;
    int ans = n;
    while(l<r){
        if(a[r]+a[l] <= 4){
            int k = a[r]+a[l];
            ans--;
            l++;
            while(k<=4 && l<r){
                if(k+a[l]>4)
                    break;
                k+=a[l];
                l++;
                ans--;
            }
                r--;
        }
        else{
            r--;
        }
    }
    cout<<ans<<endl;
}

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int a[n];
    int x[n];
    for (int i = 0; i < n; i++){
        cin>>a[i];
        x[a[i]-1] = i+1;
    }
    for (int i = 0; i < n; i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
    return 0;
}

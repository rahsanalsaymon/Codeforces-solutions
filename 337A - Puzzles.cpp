#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int a[m];
    for (int i=0; i < m; i++){
        cin>>a[i];
    }
    sort(a, a+m);
    int def = a[n-1] - a[0];
    for (int i=0; i <= m - n; i++){
        if(a[i+(n-1)]-a[i] < def){
            def = a[i+(n-1)]-a[i];
        }
    }
    cout<<def<<endl;
    return 0;
}

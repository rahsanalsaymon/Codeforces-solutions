#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int n, d;
    cin>>n>>d;
    int a[n];
    int cnt = 0;
    for(int i = 0; i < n; i++)
        cin>>a[i];
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(abs(a[i]- a[j]) <= d)
                cnt += 2;
        }
    }
    cout<<cnt<<endl;
}

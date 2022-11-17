#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int up = 1;
    int max = 0;

    for (int i = 0; i < n; i++){
        cin>>a[i];
        if(i != 0 && (a[i]>=a[i - 1])){
            up++;
        }
        else if(i != 0 && (a[i]<a[i - 1])){
            if(up>max){
                max = up;
            }
            up = 1;
        }
    }
    if(up > max){cout<<up<<endl;}
    else{cout<<max<<endl;}
}

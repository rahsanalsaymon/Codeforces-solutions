#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x = 0;
    for(int i = 0; i< n; i++){
        if(s[i]=='1')
            x++;
        }
    cout<<abs((n-x)-x)<<"\n";
}

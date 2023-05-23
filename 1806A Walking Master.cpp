#include<bits/stdc++.h>
using namespace std;
 
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        int cnt = 0;
        if(a==c && b==d){
            cout<<cnt<<"\n";
            continue;
        }
        if(b>d){
            cout<<"-1\n";
            continue;
        }
        while(b != d){
            a++;
            b++;
            cnt++;
        }
        if(a>=c){
            while(a != c){
                a--;
                cnt++;
            }
            cout<<cnt<<"\n";
        }
        else
            cout<<"-1\n";
    }
}

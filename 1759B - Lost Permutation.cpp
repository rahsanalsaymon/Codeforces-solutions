#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int m, s;
        cin>>m>>s;
        int b[m];
        int sum = 0;
        for(int i = 0; i<m; i++){
            cin>>b[i];
        }
        sort(b, b+m);
        int a[m];
        for(int i = 0; i<m; i++){
            a[i] = b[i];
        }
        int j = 1;
        for(int i = 0; i<m; i++){
            if(a[i]!= j){
                sum += j;
                j++;
                i--;
            }
            else{j++;}
        }
        if(sum==s){cout<<"YES\n";}
        else if(sum > s){cout<<"NO\n";}
        else{
            for(int i = 1; i <= s+10; i++){
                if(sum==s){
                   cout<<"YES\n";
                   break;
                }
                else if(sum < s){
                    sum += (a[m-1])+ i;
                }
                else{
                    cout<<"NO\n";
                    break;
                }
            }
        }
    }
}

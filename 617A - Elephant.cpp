#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int x;
    cin>>x;
    int steps = 0;
    if(x>=5){
        steps += x/5;
        x = x % 5;
    }
    if(x>=4){
        steps += x/4;
        x = x % 4;
    }
    if(x>=3){
        steps += x/3;
        x = x % 3;
    }
    if(x>=2){
        steps += x/2;
        x = x % 2;
    }
    cout<<steps+x<<endl;
    return 0;
}

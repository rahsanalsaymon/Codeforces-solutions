#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n < 2020)
            cout<<"NO\n";
        else{
            while(n>0){
                if(n%2021==0){
                    cout<<"YES\n";
                    break;
                }
                else n -= 2020;
                if(n<0){
                    cout<<"NO\n";
                    break;
                }
                else if(n==0){
                    cout<<"YES\n";
                    break;
                }

                if(n%2020==0){
                    cout<<"YES\n";
                    break;
                }
                else n -= 2021;
                if(n<0){
                    cout<<"NO\n";
                    break;
                }
                else if(n==0){
                    cout<<"YES\n";
                    break;
                }
            }
        }
    }
}

#include<iostream>
using namespace std;

int main()
{
	int s, n;
	cin>>s>>n;
	pair<int, int> a[n];
	for(int i =0; i < n; i++){
		cin>>a[i].first >> a[i].second ;
	}
	sort(a, a+n);
	for(int i = 0; i < n ; i++){
		if(s<=a[i].first){
			cout<<"NO\n";
			return 0;
		}
		else{
			s += a[i].second;
		}
	}
	cout<<"YES\n";
}

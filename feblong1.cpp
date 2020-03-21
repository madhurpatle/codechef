#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long int n,d=0;
		cin>>n;
		long int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		
		for(int i=0;i<n;i++){
			if(a[i]>b[i]){
				d += b[i];
			}
			else{
				d += a[i];
			}
		}
		cout<<d<<"\n";
	}
	return 0;
}
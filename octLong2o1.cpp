#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int h=0;h<t;h++){
		int n,m,q;
		cin>>n>>m>>q;
		int arr[n*m];
		for(int i=0;i<n*m;i++){
			arr[i]=0;
		}
		for(int i=0;i<q;i++){
			int x,y;
			cin>>x>>y;
			for(int j=m*(x-1);j<m+(m*(x-1));j++){
				arr[j]++;
			}
			for(int i=0;i<n*m;i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
			for(int j=y-1;j<n*m;){
				arr[j]++;
				j += n;
			}
			for(int i=0;i<n*m;i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
		
		
		int c=0;
		for(int i=0;i<n*m;i++){
			if(arr[i]%2==1){
				c++;
			}
		}
		cout<<c<<endl;
	}
}
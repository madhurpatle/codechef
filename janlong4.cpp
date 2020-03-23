#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
	int n,q;
	cin>>n>>q;
	int arr[n];
	int dp[n]={};
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=1;i<n;i++){
		if((arr[i]>arr[i+1] && arr[i-1]<arr[i]) || (arr[i]<arr[i+1] && arr[i-1]>arr[i])){
			dp[i] = dp[i-1]+1;
		}
		else{
			dp[i] = dp[i-1];
		}
	}
	for(int i=0;i<n;i++){
		cout<<dp[i]<<" ";
	}cout<<"\n";
	int l[q],r[q];
	for(int e=0;e<q;e++){
		cin>>l[e]>>r[e];
		if((dp[r[e]-1]-dp[l[e]-1])%2==0 && (dp[r[e]-1]>1)){
			cout<<"YES"<<"\n";
		}else{
			cout<<"NO"<<"\n";
		}
	}
	return 0;
}

#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
	long long n , q;
	cin>>n>>q;
	long long arr[n];
	int flag=0;
	for(long long i=0;i<n;i++){
		cin>>arr[i];
	}
	long long l[q],r[q];
	for(long long e=0;e<q;e++){
		int ci=0,cd=0;
		cin>>l[e]>>r[e];
		if((r-l)%2==1){
			//cout<<"Odd length"<<"\n";
			flag=1;
		}
		else{
		//for(int jn=0;jn<1000;jn++){cout<<dp[jn]<<"\n";}
			for(long long i=l[e]-1;i<r[e]-1;i++){
				if(arr[i]>arr[i+1]){
			//cout<<"cd:"<<cd<<" arr[i]"<<arr[i]<<"\n";
					cd++;
				}
				else if(arr[i]<arr[i+1]){
			//cout<<"ci:"<<cd<<" arr[i]"<<arr[i]<<"\n";
					ci++;
				}
			}
			if(ci==cd){
				cout<<"YES"<<"\n";
			}
			else{
		//cout<<"odd"<<"\n";
				cout<<"NO"<<"\n";
			}

		}
	}	
	return 0;
}





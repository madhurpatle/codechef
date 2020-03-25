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
		int n;
		cin>> n;
		for(int j=0;j<n;j++){
			cin>>arr[j];
		}
		int max=0;
		int max1=0;
		for(int i=1;i<n;i++){
			for(int j=i-1;j>=0;j--){
				if(arr[j]%arr[i]==0){
					max1++;
					//cout<<"arr[i] "<<arr[i]<<", "<<"max1 "<<max1<<endl;

				}
			}
			
			if(max1>max){
				max=max1;
			}
			max1=0;
		}
		cout<<max<<endl;
	}
}
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
		int arr[n];
		for(int j=0;j<n;j++){
			cin>>arr[j];
		}
		sort(arr,arr+n);
		int count=0,slot=n/4;
		int c=4,x=60,y=75,z=90;
		for(int i=0;i<n;i++){cout<<arr[i]<<" ";}cout<<endl;
		if(n==4){
			if(arr[0]!=arr[1]){x=arr[slot];slot +=n/4;}
			if(arr[1]!=arr[2]){y=arr[slot];slot +=n/4;}
			if(arr[2]!=arr[3]){z=arr[slot];slot +=n/4;}
		}
		else if(n%4==0 && n>4){
			if(arr[slot-1]!=arr[slot]){
				x=arr[slot];
				slot +=n/4;
			}
			if(arr[slot-1]!=arr[slot]){
				y=arr[slot];
				slot +=n/4;
			}
			if(arr[slot-1]!=arr[slot]){
				z=arr[slot];
				slot +=n/4;
			}
			
		}
		if(slot==n){cout<<x<<" "<<y<<" "<<z<<endl;}
		else{cout<<"-1"<<endl;}

	}
}		

			/*for(int slot=n/4;slot<n+1;){
				if(arr[slot]!=arr[slot-1]){

					count +=1;
				}
				else{
					break;
				}
				slot +=slot;
			}*/

		
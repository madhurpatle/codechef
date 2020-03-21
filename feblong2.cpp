#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    	int n ,k;
    	cin>>n>>k;
    	int a[n],c[n];
    	for(int i=0;i<n;i++){
    		cin>>a[i];c[i]=0;
    	}
    	for(int i=0;i<n;i++){
    		for(int j=0;j<i+1;j++){
    			if(a[j]%k!=0){
    				c[i]+= a[j]%k; 
    			}
    		}
    	}
    	// for(int i=0;i<n;i++){
    	// 	cout<<c[i]<<" ";
    	// }cout<<"\n";
    	for(int i=0;i<n;i++){
    		for(int j=i+1;j<n;j++){
    			if(a[j]%k!=0 && c[i]>0){
    				c[i]= c[i] - (k - a[j]%k); 
    			}
    			else if(a[j]%k!=0 && c[i]<1){
    				c[i]= -1;
    			}
    			if(c[i]>k){
    				c[i] = c[i]%k;
    			}
    		}
    	}
    	// for(int i=0;i<n;i++){
    	// 	cout<<c[i]<<" ";
    	// }cout<<"\n";
    	int min=INT_MAX;
    	for(int i=1;i<n;i++){
    		if(min>c[i] && c[i]>=0){
    			min = c[i];
    		}
    	}
    	cout<<min<<"\n";
    }
    
    
    return 0;
}
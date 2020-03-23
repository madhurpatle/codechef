#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	int s[n],p[n],v[n],co[n];
    	for(int i=0;i<n;i++){
    		cin>>s[i]>>p[i]>>v[i];
    		co[i] = floor(p[i]/(s[i]+1))*v[i];
    	}
    	for(int i=0;i<n;i++){
    		cout<<co[i]<<" ";
    	}
    	int max = co[0];
    	for(int i=1;i<n;i++){
    		if(co[i]>max){
    			max=co[i];
    		}
    	}
    	cout<<max<<"\n";
    }
    
    
    return 0;
}
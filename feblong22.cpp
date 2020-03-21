#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--){
    	long int n ,k, sum=0;
    	cin>>n>>k;
    	long int a[n];
    	for(long int i=0;i<n;i++){
    		cin>>a[i];
            a[i] = a[i]%k;
            sum += a[i];
    	}
        // for(int i=0;i<n;i++){
        //     cout<<a[i]<<" ";
        // }cout<<"\n"<<"sum:"<<sum<<"\n";
        cout<<sum%k<<"\n";
    }return 0;
}
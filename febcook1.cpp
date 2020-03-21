#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    	long long int n,a=0,b=0,f=0,ac=0,bc=0;
    	cin>>n;
    	string st;
    	cin>>st;
    	char arr[2*n]; 
        strcpy(arr, st.c_str()); 
        for(int i=0;i<2*n;i++){
        	if(i%2==0){
        		if(arr[i]=='1'){a++;}
        		ac++;
        	}
        	if(i%2==1){
        		if(arr[i]=='1'){b++;}
        		bc++;
        	}
        	cout<<"a:"<<a<<" b:"<<b<<"\n";
        	//cout<<n/2<<"\n";
        	if((a>b+n-bc) || (b>a+n-ac) || (a==b && i==2*n-1)){
        		f=i+1;
        		break;
        	}
        }
        cout<<f<<"\n";
    }
    
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int dtoc(int x) 
{ 
    int y = x ^ (x >> 1); 
    y = y ^ (y >> 2); 
    y = y ^ (y >> 4); 
    y = y ^ (y >> 8); 
    y = y ^ (y >> 16); 
    if (y & 1) 
        return 1; 
    return 0; 
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	int n,qq1;
    	cin>>n>>qq1;
    	int seqq1[n],sss=0, qq1ui[qq1],qq1uiA[qq1];
    	for(int i=0;i<n;i++){
    		cin>>seqq1[i];
    		sss += dtoc(seqq1[i]);
    	}
    	for(int i=0;i<qq1;i++){
    		cin>>qq1ui[i];
    		qq1uiA[i] = dtoc(qq1ui[i]);
    	}
    	for(int i=0;i<qq1;i++){
    		if(dtoc(qq1ui[i])==0){
    			cout<<n-sss<<" "<<sss<<"\n";
    		}
    		else if(dtoc(qq1ui[i])==1){
    			cout<<sss<<" "<<n-sss<<"\n";
    		}
    	}

    }
    return 0;
}
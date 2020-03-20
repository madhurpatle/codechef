#include <bits/stdc++.h>
using namespace std;
int dtoc(int x) 
{ 
    int y = x ^ (x >> 1); 
    y = y ^ (y >> 2); 
    y = y ^ (y >> 4); 
    y = y ^ (y >> 8); 
    y = y ^ (y >> 16); 
  
    // Rightmost bit of y holds the parity value 
    // if (y&1) is 1 then parity is odd else even 
    if (y & 1) 
        return 1; 
    return 0; 
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    scanf("%d",&t);
    while(t--){
    	int n,q;
    	scanf("%d %d",&n,&q);
    	int seq[n],seqA[n], qui[q],quiA[q];
    	for(int i=0;i<n;i++){
    		scanf("%d",&seq[i]);
    		seqA[i]= dtoc(seq[i]);
    	}
    	for(int i=0;i<q;i++){
    		scanf("%d",&qui[i]);
    		quiA[i] = dtoc(qui[i]);
    	}
    	for(int i=0;i<q;i++){
    		int even=0;
    		for(int j=0;j<n;j++){
    			if((quiA[i]+seqA[j])%2==0){
    				even++;
    			}
    		}
    		printf("%d %d\n",even,n - even );
    	}

    }
    return 0;
}
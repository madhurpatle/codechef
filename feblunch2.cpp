#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	int n,k;
    	cin>>n>>k;
    	int arr[n];
    	int num[k];
    	for(int i=0;i<k;i++){
    		num[i]=0;
    	}
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
    		num[arr[i]-1]++;
    	}
    	// for(int i=0;i<k;i++){
    	// 	cout<<num[i]<<" ";
    	// }
    	// 	cout<<"counts \n";
    	//find least occuring
    	int min=INT_MAX;
    	int least=0;
    	for(int i=0;i<k;i++){
    		if(min>num[i]){min=num[i];least=i+1;}
    	}//cout<<"least:"<<least<<"\n";
    	
    	
    	if(num[least-1]==0){
    		cout<<n<<" ";
    	}
    	else{
    		int position[num[least-1]+1];int p=0;
    	for(int i=0;i<num[least-1]+1;i++){
    		position[i]=0;
    	}
    	for(int i=0;i<n;i++){
    		if(arr[i]==least && p==0){
    			position[p]= i;
    			p++;
    			//cout<<i<<"case1"<<"\n";

    		}
    		else if(arr[i]==least && p>0 && p<min){
    			position[p]= i - position[p-1]-1;
    			p++;
    			//cout<<i<<"case2"<<"\n";

    		}
    		else if(p==min){
    			position[p] = n-i;
    			//cout<<i<<"case3"<<"\n";
    			break;
    		}
    	}
    		// for(int i=0;i<num[least-1]+1;i++){
    		// 	cout<<position[i]<<" ";
    		// }//cout<<"positions\n";
    		int max=INT_MIN;
    		for(int i=0;i<num[least-1]+1;i++){
    			if(max<position[i]){max=position[i];}
    		}
    		cout<<max<<"\n";

    	}

    }
    
    
    return 0;
}
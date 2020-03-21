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
    	vector <char> vec;
    	for(int i=0;i<n;i++){
    		char c;
    		cin>>c;
    		vec.push_back(c);
    	}
    	// for (auto it = vec.begin(); it !=vec.end(); it++) 
     //    cout << *it << " "; 
    	while(k--){
    		int size = vec.size();
    		if(vec[size-1]=='H'){
    			for(int i=0;i<size;i++){
    				if(vec[i]=='H'){vec[i]='T';}
    				else if(vec[i]=='T'){vec[i]='H';}

    			}
    		}
    		vec.pop_back();
    	}
    	int count=0;
    	for (auto it = vec.begin(); it !=vec.end(); it++) 
    		if(*it=='H')
    			count++;
     		
    	cout <<count << "\n"; 

    }
    
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,s;
	cin>>t>>s;
	while(t--){
		long long n,answer=0;
		cin>>n;
		long long  a[n],b[n];
		for(long long i=0;i<n;i++){
			cin>>a[i];
		}
		for(long long i=0;i<n;i++){
			cin>>b[i];
		}
		
		if(s==1){
			// long long insert[2*n];
			// for(long long i=0;i<2*n;i++){
			// 	insert[i]=0;
		 //    }
			vector<long long> insert;
			sort(a,a+n);
			sort(b,b+n);
			if(a[0]<b[0]){
				// insert[0] = a[0];
				// insert[1] = b[0];
				insert.push_back(a[0]);
				insert.push_back(b[0]);
				answer++;
			}
			for (int i=1;i<n;i++)
				if(a[i]<b[i]){
					for (int j = 0; j <insert.size(); j++){
						if(a[i]== insert[j]){
							answer++;
							insert.push_back(a[i]);
							insert.push_back(b[i]);
							// insert[2*i]=a[i];
							// insert[2*i+1]=b[i];
							//cout<<"\n aa:"<<a[i]<<" "<<b[i]<<"\n";
							//cout<<"answer:"<<answer<<"\n";
							break;
						}
					}
				}	
			if(answer==n)
				cout<<"YES"<<"\n";
			else if(answer<n)
				cout<<"NO"<<"\n";
		}
	}
	return 0;
}
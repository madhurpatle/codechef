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
		int n,m,q;int ro=0, co=0;
		cin>>n>>m>>q;
		int row[n], col[m];
		for(int i=0;i<n;i++){
			row[i]=0;
		}
		for(int i=0;i<m;i++){
			col[i]=0;
		}
		for(int i=0;i<q;i++){
			int x,y;
			cin>>x>>y;
			row[x-1] +=1;
			col[y-1] +=1;
			cout<<"row :";for(int i=0;i<n;i++){cout<<row[i]<<" ";}cout<<endl;
		    cout<<"col :";for(int i=0;i<m;i++){cout<<col[i]<<" ";}cout<<endl;	
		}
		for(int i=0;i<n;i++){
			if(row[i]%2==1){
				ro++;
			}
		}
		cout<<"ro "<<ro<<endl;
		for(int i=0;i<m;i++){
			if(col[i]%2==1){
				co++;
			}
		}
		cout<<"co "<<co<<endl;

		int result=0;
		if(n==m){
			result = n*ro + m*co - (ro*co*2);
		}
		else if(n>m){
			result = n*ro + m*co  - (n-m)*ro;
		}
		else if(m>n){
			result = n*ro + m*co  - (m-n)*co;
		}
		
		cout<<result<<endl;
	}
}
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
		int n,m,q;
		cin>>n>>m>>q;
		int arr[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				arr[i][j]=0;
			}
		}
		/*for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}*/
		for(int i=0;i<q;i++){
			int x,y;
			cin>>x>>y;
			for(int j=0;j<m;j++){
				arr[x-1][j]++;
			}
			for(int j=0;j<n;j++){
				arr[j][y-1]++;
			}
		}
		/*for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}*/
		int c=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(arr[i][j]%2==1){
					c++;
				}
			}
		}
		cout<<c<<endl;



	}
}
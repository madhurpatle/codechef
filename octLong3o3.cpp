#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int myXOR(int x, int y) 
{ 
   return (x | y) & (~x | ~y); 
} 
int main(){
	int t;
	cin>>t;
	for(int h=0;h<t;h++){
		int n;long k;
		cin>>n>>k;
		int arr[n];
		int arr1[n];
		int arr4[n];
		for(int q=0;q<n;q++){
			cin>>arr[q];
			arr1[q]=arr[q];
			arr4[q]=arr[q];
		}
		int arr2[3*n];
		for(int q=0;q<3*n;q++){
			arr2[q]=0;
		}
		int i=0,j=0;
		while(i!=3*n){
			if(n%2==1 && (i%n)==ceil(n/2)){arr[i%n]=0;arr2[j%(3*n)]=0;}
			else if(((i+1)%n)>(n/2)+1){
				arr[i%n]= arr1[n-i%n-1];
				arr2[j%(3*n)] = arr[i%n];
			}
			else{
				arr[i%n]=myXOR(arr[i%n],arr[n-i%n-1]);
			    arr2[j%(3*n)] = arr[i%n];
		    }
		    if((i+1)%n==0){
				for(int q=0;q<n;q++){
					arr1[q]=arr[q];
				}
			}
		    i++;
		    j++;
		}
		int e=0;

		/*for(int q=0;q<3*n;q++){
			cout<<arr2[q]<<" ";
		}
		cout<<endl;*/
		if(k<=n && k>0){
			//cout<<"k<=n && k>0"<<endl;
			for(int q=0;q<k;q++){
				arr4[e]=arr2[q];
				e++;
			}
		}
		else if(k%(3*n)>n && k%(3*n)<=(2*n)){
			//cout<<"k%(3*n)>n && k%(3*n)<=(2*n)"<<endl;
			for(int q=0;q<n;q++){
				arr4[e]=arr2[q];
				e++;
			}
			e=0;
			for(int q=n;q<(k%(3*n));q++){
				arr4[e]=arr2[q];
				e++;
			}
		}
		else if(k%(3*n)>(2*n) && k%(3*n)<=(3*n)){
			//cout<<"k%(3*n)>(2*n) && k%(3*n)<=(3*n)"<<endl;
			for(int q=n;q<(2*n);q++){
				arr4[e]=arr2[q];
				e++;
			}
			e=0;
			for(int q=(2*n);q<(k%(3*n));q++){
				arr4[e]=arr2[q];
				e++;
			}
		}
		else if(k%(3*n)>0 && k%(3*n)<=n && k>(3*n)){
			//cout<<"k%(3*n)>0 && k%(3*n)<=n && k>(3*n)"<<endl;
			for(int q=(2*n);q<(3*n);q++){
				arr4[e]=arr2[q];
				e++;
			}
			e=0;
			for(int q=0;q<(k%(3*n));q++){
				arr4[e]=arr2[q];
				e++;
			}
		}
		else if(k%(3*n)==0 && k>0){
			//cout<<"k%(3*n)==0 && k>0"<<endl;
			for(int q=(2*n);q<(3*n);q++){
				arr4[e]=arr2[q];
				e++;
			}

		}
		for(int q=0;q<n;q++){
				cout<<arr4[q]<<" ";
		}
		cout<<endl;		
	}
}
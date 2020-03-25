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
		int n,k;
		cin>>n>>k;
		int arr[n];
		int arr1[n];
		int arr2[4*n];
		for(int q=0;q<4*n;q++){
			arr2[q]=0;
		}
		for(int q=0;q<n;q++){
			cin>>arr[q];
			arr1[q]=arr[q];
			arr2[q]=arr[q];
		}
		int i=0,j=0;
		while(i!=3*n){
			if(i<=n*3){
				if(n%2==1 && (i%n)==ceil(n/2)){arr[i%n]=0;arr2[j%(3*n)+n]=0;}
			    else if(((i+1)%n)>(n/2)+1){
				    arr[i%n]= arr1[n-i%n-1];
				    arr2[j%(3*n)+n] = arr[i%n];
			    }
			    else{
				    arr[i%n]=myXOR(arr[i%n],arr[n-i%n-1]);
				    arr2[j%(3*n)+n] = arr[i%n];
			    }
			    if((i+1)%n==0){
				    for(int q=0;q<n;q++){
					    arr1[q]=arr[q];
				    }
			    }
			    i++;
			    j++;
			}
			else{
				arr[i%n]=arr2[i%(n*3)];
				i++;
			}

			
		}
		for(int q=k%(4*n);q<(n+k)%(4*n);q++){
			cout<<arr2[q]<<" ";
		}
		/*for(int q=0;q<4*n;q++){
			cout<<arr2[q]<<" ";
		}
		for(int q=n;q<n;q++){
			cout<<arr[q]<<" ";
		}
		cout<<endl;
		for(int q=0;q<3*n;q++){
			cout<<arr2[q]<<" ";
		}*/
	}
}
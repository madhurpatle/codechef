#include <bits/stdc++.h> 
using namespace std; 
  
// A utility function that returns maximum of two integers  
int max(int a, int b) { return (a > b)? a : b; }  
  
// Returns the maximum value that  
// can be put in a knapsack of capacity W  
int knapSack(int W, int wt[], int val[], int n)  
{  
      
// Base Case  
if (n == 0 || W == 0)  
    return 0;  
  
// If weight of the nth item is more  
// than Knapsack capacity W, then  
// this item cannot be included 
// in the optimal solution  
if (wt[n-1] > W)  
    return knapSack(W, wt, val, n-1);  
  
// Return the maximum of two cases:  
// (1) nth item included  
// (2) not included  
else return max( val[n-1] + knapSack(W-wt[n-1], wt, val, n-1),  
                    knapSack(W, wt, val, n-1) );  
}  
  
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,p;
		cin>>n>>p;
		int d[n],arr[n],sum=0;
		for(int i=0;i<n;i++){
			cin>>d[i];
			if(d[i]<p){arr[i]= p%d[i];}
			else if(d[i]>p){arr[i]=d[i]%p;}
			else{arr[i]=0;}
				sum += arr[i];
		}
		if(sum==0){
			cout<<"NO"<<"\n";
		}
		else{
			cout<<"YES"<<"\n";
		}

	}
	return 0;
}  
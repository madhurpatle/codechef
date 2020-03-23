#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int n,a,b,c;
        cin>>n>>a>>b>>c;
        long long int arr[n];
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long int count=c, count1=c;
        long long int gaya = 0, gaya1=0;
        long long int min1 = (arr[0]-a);
        for(long long int i=1;i<n;i++){
            if(abs(arr[i]-a)<min1){
                min1=abs(arr[i]-a);
                gaya1=i;
            }
        }
        cout<<arr[gaya1]<<"\n";
        count1 += min1;
        count1 += abs(arr[gaya1]-b); 
        cout<<count1<<"\n";

        long long int min=abs(arr[0]-b);
        
        for(long long int i=1;i<n;i++){
            if(abs(arr[i]-b)<min){
                min=abs(arr[i]-b);
                gaya=i;
            }
        }
        cout<<arr[gaya]<<"\n";
        count += min;
        count += abs(arr[gaya]-a); 
        cout<<count<<"\n";

        if(count<count1){cout<<count<<"\n";}
        else{cout<<count1<<"\n";}

    }
    return 0;
}
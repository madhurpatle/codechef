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
        long long int come[n];
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long int count=c;
        long long int gaya = 0;
        for(long long int i=0;i<n;i++){
            come[i] = abs(arr[i]-b);
            come[i] += abs(arr[i]-a);
        }
        long long int min = come[0];
        for(long long int i=0;i<n;i++){
            if(come[i]<min){
                min=come[i];
            }
        }
        min +=c;
        cout<<min<<"\n";
    }
    return 0;
}
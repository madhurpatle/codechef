#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int m=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]<m){
                m=arr[i];
            }
        }
        cout<<m<<"\n";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int q=0;q<n;q++){
        long long int a,b;
        cin>>a>>b;
        int c=0,flag=0;
        long long int m=0;
        if(a>b){m=a;}
        else{m=b;}
        if(a==1 || b==1){
            flag=1;
        }
        for(long long int i=1;i<m;i++){
            if((a-1)%i == (b-1)%i){
                c++;
            //cout<<"i:"<<i;
            }
        }
        if(flag==1){
            cout<<"-1"<<"\n";
        }
        else{
            cout<<c<<"\n";    
        }

    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
    cin>>t;
    for(int q=0;q<t;q++){
    	int n,s,a,b,c,d,e,result;
    	cin>>n>>a;
    	s  = 2*(pow(10,n))+a;
    	cout<<s;//<<fflush;
    	cin>>b;
    	c = pow(10,n) - b;
    	cout<<c;//<<fflush;
    	cin>>d;
    	e = pow(10,n) - d;
    	cout<<d;//<<fflush;
    	cin>>result;
    	if(result==-1){
        	exit(0);
        }
    }
    return 0;
}
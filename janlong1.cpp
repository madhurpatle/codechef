#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
    	int s , n1 ,n2, n3;
    	cin>>s>>n1>>n2>>n3;
    	int r=0;
    	if ((n1+n2+n3)<=s)
    		r +=1;
  		else if((n1+n2)<=s)
    		r +=2;
  		else if((n3+n2)<=s)
    		r +=2;
  		else if((n1+n2)>=s)
    		r +=3;
  		else if ((n3+n2)>=s)
    		r +=3;    
    cout<<r<<"\n";
    }
    return 0;
}
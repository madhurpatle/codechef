#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	int r0,c0;
    	vector<int> r,c;
    	cin>>r0>>c0;
    	int count=0;
    	if(r0!=c0){
    		r.push_back((r0+c0)/2);
    		c.push_back((r0+c0)/2);
    		count++;
    	}
    	r.push_back(1);c.push_back(1);count++;
    	r.push_back(2);c.push_back(2);count++;
    	r.push_back(3);c.push_back(1);count++;
    	r.push_back(1);c.push_back(3);count++;
    	r.push_back(2);c.push_back(2);count++;
    	r.push_back(3);c.push_back(3);count++;
    	r.push_back(1);c.push_back(5);count++;
    	r.push_back(2);c.push_back(4);count++;
    	r.push_back(4);c.push_back(2);count++;
    	r.push_back(5);c.push_back(1);count++;
    	r.push_back(3);c.push_back(3);count++;
    	r.push_back(4);c.push_back(4);count++;
    	r.push_back(1);c.push_back(7);count++;
    	r.push_back(2);c.push_back(6);count++;
    	r.push_back(3);c.push_back(5);count++;
    	r.push_back(5);c.push_back(3);count++;
    	r.push_back(6);c.push_back(2);count++;
    	r.push_back(7);c.push_back(1);count++;
    	r.push_back(4);c.push_back(4);count++;
    	r.push_back(5);c.push_back(5);count++;
    	r.push_back(2);c.push_back(8);count++;
    	r.push_back(3);c.push_back(7);count++;
    	r.push_back(4);c.push_back(6);count++;
    	r.push_back(6);c.push_back(4);count++;
    	r.push_back(7);c.push_back(3);count++;
    	r.push_back(8);c.push_back(2);count++;
    	r.push_back(5);c.push_back(5);count++;
    	r.push_back(6);c.push_back(6);count++;
    	r.push_back(4);c.push_back(8);count++;
    	r.push_back(5);c.push_back(7);count++;
    	r.push_back(7);c.push_back(5);count++;
    	r.push_back(8);c.push_back(4);count++;
    	r.push_back(6);c.push_back(6);count++;
    	r.push_back(7);c.push_back(7);count++;
    	r.push_back(6);c.push_back(8);count++;
    	r.push_back(8);c.push_back(6);count++;
    	r.push_back(7);c.push_back(7);count++;
    	r.push_back(8);c.push_back(8);count++;


    	
    	
    	
    	cout<<count<<"\n";
    	for (auto i = r.begin(), j = c.begin(); i != r.end() , j!= c.end(); ++i,++j) 
    		cout << *i << " "<< *j<<"\n"; 
    }
    
    
    return 0;
}
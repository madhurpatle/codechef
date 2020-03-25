#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int h=0;h<t;h++){
		int n;
		cin >> n;
		int b=0;
		vector<int> vec;
		for(int i=0;i<n;i++){
			cin>>b;
			vec.push_back(b);
		}
		//for(int i=0;i<n;i++){cout<<vec[i]<<" ";}
		int count=0;
		int q=5;
		int c=0;
		for(int i=0;i<n;i++){
			if(i>5){
				while(q>0){
					if(vec[i]<vec[i-q]){
						c +=1;
				    }
				    //cout<<vec[i]<<" "<<vec[i-q+1]<<""""<<"i "<<i<<", "<< "c "<<c<<", "<<"q "<<q <<"count "<<count<<endl;
				    q--;
				}
				if(c==5){count++;}
				c=0;
			}
			else if(i<=5){
				q=i;
				while(q>=0){
					if(vec[i]<vec[i-q]){
						c++;
					}
					//cout<<vec[i]<<" "<<vec[i-q]<<""""<<"i "<<i<<", "<< "c "<<c<<", "<<"q "<<q << "count "<<count<<endl;
					q--;
				}
				if(c==i){count++;}
				c=0;
			}
			q=5;
			
			

		}
		cout<< count<<endl;

	}
}
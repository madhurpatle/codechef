#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    	int salary,tsal=0;
    	cin>>salary;
    	if(salary<=250000){
    		tsal +=0;

    	}
    	if(salary>=250001){
    		if(salary<=500000){
    			tsal += (salary-250000)*0.05;
    		}
    		else{
    			tsal += (500000-250000)*0.05;
    		}
    	}
    	//cout<<(int)salary<<"\n";

    	//cout<<(int)tsal<<"\n";
    	if(salary>=500001){
    		if(salary<=750000){
    			//cout<<"aaaa"<<salary<<"\n";
    			tsal += (salary-500000)*0.1;
    		}
    		else{
    			tsal += (750000-500000)*0.1;
    	   }
    	}
    	if(salary>=750001){
    		if(salary<=1000000){
    		tsal += (salary-750000)*0.15;
    		}
    		else{
    			tsal += (1000000-750000)*0.15;

    		}
    	}

    	if(salary>=1000001){
    		if(salary<=1250000){
    			tsal += (salary-1000000)*0.2;
    		}
    		else{
    			tsal += (1250000-1000000)*0.2;
    		}
    	}

    	if(salary>=1250001){
    		if(salary<=1500000){
    			tsal += (salary-1250000)*0.25;
    		}
    		else{
    			tsal += (1500000-1250000)*0.25;

    		}
    		
    	}

    	if(salary>=1500001){
    		tsal +=  (salary-1500000)*0.3;
    	}
    	salary = salary - tsal;
    	cout<<salary<<"\n";
    }
    return 0;
}
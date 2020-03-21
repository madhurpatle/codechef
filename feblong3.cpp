#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	int total=0;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		char c[n];int t[n];
		int m[4][4];
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				m[i][j]=0;
			}
		}
		for(int i=0;i<n;i++){
			cin>>c[i]>>t[i];
			if(t[i]==12){
				m[(int)c[i]-65][0] ++;
			}
			else if(t[i]==3){
				m[(int)c[i]-65][1] ++;
			}
			else if(t[i]==6){
				m[(int)c[i]-65][2] ++;
			}
			else if(t[i]==9){
				m[(int)c[i]-65][3] ++;
			}
		}

		// for (int i = 0; i < 4; i++) { 
  //       	for (int j = 0; j < 4; j++) { 
  //           	cout<<m[i][j]<<" "; 
  //       	} cout<<"\n";
  //   	}cout<<"\n";


		int max[4] = {0,0,0,0};
		int r0=0,r2=0,r3=0,r1=0,c0=0,c2=0,c3=0,c1=0;
		for (int i = 0; i < 4; i++) { 
        	for (int j = 0; j < 4; j++) { 
            	if (m[i][j] > max[0]) { 
                	max[0] = m[i][j]; r0=i;c0=j;
            	} 
        	} 
    	} 
    	//cout<<"max0:"<<max[0]<<"\n";

    	for (int i = 0; i < 4; i++) { 
        	for (int j = 0; j < 4; j++) { 
            	if ((m[i][j] > max[1]) && i!=r0 && j!=c0) { 
                	max[1] = m[i][j]; r1=i;c1=j;
            	} 
        	} 
    	} 
    	//cout<<"max1:"<<max[1]<<"\n";
    	for (int i = 0; i < 4; i++) { 
        	for (int j = 0; j < 4; j++) { 
            	if ((m[i][j] > max[2]) && i!=r0 && j!=c0 && i!=r1 && j!=c1) { 
                	max[2] = m[i][j]; r2=i;c2=j;
            	} 
        	} 
    	} 
    	//cout<<"max2:"<<max[2]<<"\n";
    	for (int i = 0; i < 4; i++) { 
        	for (int j = 0; j < 4; j++) { 
            	if ((m[i][j] > max[3]) && i!=r0 && j!=c0 && i!=r1 && j!=c1 && i!=r2 && j!=c2 ) { 
                	max[3] = m[i][j]; r3=i;c3=j;
            	} 
        	} 
    	}
    	 //cout<<"max3:"<<max[3]<<"\n";
    	int price =0; 
    	if(max[0]==0){price -= 100;}
    	if(max[1]==0){price -= 100;}
    	if(max[2]==0){price -= 100;}
    	if(max[3]==0){price -= 100;}

    	sort(max,max+4);
    	//cout<<max[0]<<" "<<max[1]<<" "<<max[2]<<" "<<max[3]<<"\n";
    	price += max[0]*25;
    	price += max[1]*50;
    	price += max[2]*75;
    	price += max[3]*100;
    	cout<<price<<"\n";
    	total += price;
    }
    cout<<total;
    return 0;
}

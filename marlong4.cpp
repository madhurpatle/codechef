#include <bits/stdc++.h>
using namespace std;
struct query{
	int x1,x2,y;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
    	int n ,q;
    	cin>>n>>q;
    	int point[n];
    	struct query qui[q];
    	for(int i=0;i<n;i++){
    		cin>>point[i];
    	}

    	for(int i=0;i<q;i++){
    		cin>>qui[i].x1>>qui[i].x2>>qui[i].y;
    	}

    	//common range of X in queries
    	//find maximum x1 and minimum x2
    	int maxx1=INT_MIN, minx2 = INT_MAX;
    	for(int i=0;i<q;i++){
    		if(maxx1<qui[i].x1)
    			maxx1=qui[i].x1;
    		if(minx2>qui[i].x2)
    			minx2=qui[i].x2;
    	}
    	//cout<<maxx1<<" "<<minx2<<"\n";
    	
    	//find count of collide for each
    	for(int i=0;i<q;i++){
    		int count=0;
    		for(int j=0;j<n-1;j++){
    			if(/*flag*/point[j]<=point[j+1] && /*x axis*/(qui[i].x2>=j+1 && qui[i].x1<=j+2) && /*y axis*/ (qui[i].y>=point[j] && qui[i].y<=point[j+1]) && /*x2 && j+1*/ (qui[i].x2>=j+2 && qui[i].y<=point[j+1]) && /*x2 && j*/((qui[i].x2>=j+1 || qui[i].y>point[j]) && (qui[i].x2>j+1 || qui[i].y>=point[j])) && /*x1 & j*/(qui[i].x1 <=j+1 && qui[i].y>=point[j]) && /*x1 && j+1*/ ((qui[i].x1 <=j+2 || qui[i].y<point[j+1]) && (qui[i].x1 <j+2 || qui[i].y<=point[j+1]) ))
    				{cout<<"j j+1:"<<j+1<<j+2<<"query:"<<qui[i].x1<<qui[i].x2<<qui[i].y <<" "<<"line:"<<point[j]<<point[j+1];
    				count++;}
    			else if(/*flag*/point[j]>point[j+1] && /*x axis*/(qui[i].x2>=j+1 && qui[i].x1<=j+2) && /*y axis*/ (qui[i].y<=point[j] && qui[i].y>=point[j+1]) && /*x2 && j+1*/ (qui[i].x2>=j+2 && qui[i].y>=point[j+1]) && /*x2 && j*/((qui[i].x2>=j+1 || qui[i].y<point[j]) && (qui[i].x2>j+1 || qui[i].y<=point[j])) && /*x1 && j*/ (qui[i].x1<=j+1 && qui[i].y<=point[j]) && /*x1 && j+1*/ ((qui[i].x1 <=j+2 || qui[i].y >point[j+1]) && (qui[i].x1 < j+2 || qui[i].y >=point[j+1])) )
    				{cout<<"j j+1:"<<j+1<<j+2<<"query:"<<qui[i].x1<<qui[i].x2<<qui[i].y <<" "<<"line:"<<point[j]<<point[j+1];
    				count++;}
    		}
    		cout/*<<"count:"*/<<count<<"\n";
    	}


    }
    
    
    return 0;
}
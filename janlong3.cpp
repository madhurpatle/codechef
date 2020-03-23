#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int n,m;
        cin>>n>>m;
        long long matrix[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>matrix[i][j];
            }
        }
        int count = n*m;
        int len=0;
        for(int i=1;i<n-1;i++){
            for(int j=1;j<m-1;j++){
                int c=0;
                int len=min(i,min(j,min(n-i-1,m-j-1)));
                for(int z=1;z<len+1;z++){
                    if(matrix[i-z][j]==matrix[i+z][j]  && matrix[i][j-z]==matrix[i][j+z]){
                        cout<<"value:"<<matrix[i][j]<<" i:"<<i<<" j:"<<j<<" z:"<<z<<"\n";

                        cout<< "A:"<<matrix[i-z][j]<<" A:"<<matrix[i+z][j]<<" B:"<<matrix[i][j-z]<<" B:"<<matrix[i][j+z]<<"\n";
                        c+=1;
                    }
                    else{
                        break;
                    }
                }
                count+=c;
                c=0;
                //cout<<"count:"<<count<<"\n";
            }
        }
        cout<<count<<"\n";
        count =0;
    }
    return 0;
}
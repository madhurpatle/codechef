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
        //input taken and matrix created
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
        int price[24],q=0;
        for(int i=0;i<24;i++){
            price[i]=0;
        }
        int max[4]={0,0,0,0};
        for(int i=0;i<4;i++){
            max[0]=m[i][0];
            for(int j=0;j<4;j++){
                if(j!=i){
                    max[1]=m[j][1];
                    for(int k=0;k<4;k++){
                        if(k!=i && k!=j){
                            max[2]=m[k][2];
                            for(int l=0;l<4;l++){
                                if(l!=i && l!=j && l!=k){
                                    max[3]=m[l][3];
                                    cout<<"q :"<<q<<" max :";
                                    for(int s=0;s<4;s++){
                                        cout<<max[s]<<" ";
                                    }cout<<"\n";
                                    sort(max,max+4);
                                    if(max[0]==0){price[q] -= 100;}
                                    if(max[1]==0){price[q] -= 100;}
                                    if(max[2]==0){price[q] -= 100;}
                                    if(max[3]==0){price[q] -= 100;}
                                    price[q] += max[0]*25;
                                    price[q] += max[1]*50;
                                    price[q] += max[2]*75;
                                    price[q] += max[3]*100;
                                    q++;
                                }
                            }
                        }
                    }
                }
            }
        }
        int p=price[0];
        for(int i=0;i<24;i++){
            cout<<price[i]<<" ";
            if(p<price[i]){
                p=price[i];
            }
        }cout<<"\n";
        
        cout<<"t : "<<t<<" p :"<<p<<"\n";
        total += p;
    }
    //cout<<total<<"\n";
    return 0;
}

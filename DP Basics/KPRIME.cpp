#include<bits/stdc++.h>

using namespace std;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,a,b,k;
    cin>>t;
    int inp[t][3];
    int mx=INT_MIN;
    for(int i=0;i<t;i++){ cin>>inp[i][0]>>inp[i][1]>>inp[i][2];mx=mx>inp[i][1]?mx:inp[i][1];}
    
    int mat[mx+1];
    memset(mat,0,sizeof(mat));
    for(int i=2;i<=mx;i++){
        if(mat[i]==0){
            for(int j=i*2;j<=mx;j+=i) 
                mat[j]++;
        }
    }
    for(int i=2;i<=mx;i++) if(mat[i]==0) mat[i]=1;
    int count;
    for(int i=0;i<t;i++){
        count=0;
        for(int j=inp[i][0];j<=inp[i][1];j++){
            if(mat[j]==inp[i][2]) count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}
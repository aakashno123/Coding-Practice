#include<bits/stdc++.h>

using namespace std;

int mod=(int)1e9+9;


int mat[(int)1e6];


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n;
    memset(mat,0,sizeof(mat));
    mat[0]=0;
    mat[1]=0;
    mat[2]=1;
    mat[3]=1;
    cin>>t;
    int inp[t];
    for(int i=0;i<t;i++) cin>>inp[i];
    int mx=*max_element(inp,inp+t);
    for(int i=4;i<=mx;i++){
        mat[i]=(mat[i-2]+mat[i-3])%mod;
    }
    for(int i=0;i<t;i++){
        cout<<mat[inp[i]]<<"\n";
    }
    return 0;
}
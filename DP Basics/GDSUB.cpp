#include<bits/stdc++.h>

using namespace std;
#define ll long long int
ll mod=1e9+7; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    unordered_map<int,int> umap;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        umap[temp]++;
    }
    k=min(k,(int)umap.size());
    ll mat[k+1]={0};
    mat[0]=1;
    ll val;
    for(auto it=umap.begin();it!=umap.end();it++){
        val=(*it).second;
        for(int i=k;i>=1;i--){
            mat[i]=(mat[i]+mat[i-1]*val)%mod;
        }
    }
    ll res=0;
    for(int i=0;i<=k;i++) res=(res+mat[i])%mod;
    cout<<res<<"\n";
    return 0;
}
#include<bits/stdc++.h>

using namespace std;


int main(){
int n,k,p,i;
cin>>n>>k>>p;
int arr[n],arr1[n];
unordered_map<int,int> umap;
for(i=0;i<n;i++){ cin>>arr[i];arr1[i]=arr[i];umap.insert({arr[i],i+1});}
sort(arr,arr+n);
int mat[n];
mat[n-1]=arr[n-1]+k;
for(i=n-2;i>-1;i--){
    if(arr[i+1]-arr[i]<=k) mat[i]=mat[i+1];
    else mat[i]=arr[i]+k;
    umap[arr[i]]=mat[i];
}

int a,b,c;
for(i=0;i<p;i++){
    cin>>a>>b;
    if(a==b){ cout<<"Yes\n";continue;}
    a--;b--;
    c=a+b;
    a=arr1[a]<arr1[b]?a:b;
    b=c-a;
    if(umap[arr1[a]]>=arr1[b]) cout<<"Yes\n";
    else cout<<"No\n";
}
return 0;
}

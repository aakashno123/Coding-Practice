#include<bits/stdc++.h>

using namespace std;

int arr[(int)1e5];
int mat[(int)1e5];






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n;
    long long sum=0;
    cin>>t;
    while(t--){
        cin>>n;
        memset(mat,1,sizeof(int)*n);
        sum=0;
        for(int i=0;i<n;i++){ 
            cin>>arr[i];
            mat[i]=1;
            if(i!=0 && arr[i-1]<=arr[i]) mat[i]=mat[i-1]+1;
            sum+=mat[i];        
        }
        cout<<sum<<"\n";
    }
    return 0;
}
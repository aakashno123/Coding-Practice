#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    int n,l;
    cin>>n;
    for(int i=0;i<n;i++){ 
        cin>>str;
        l=str.length();
        if(l>10){
            cout<<str[0]<<l-2<<str[l-1]<<"\n";
        }
        else cout<<str<<"\n";
    }

    return 0;
}
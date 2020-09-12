#include<bits/stdc++.h>

using namespace std;

void print(string str,int len){
    for(int i=0;i<len;i++){
        cout<<str[i];
    }
    cout<<"\n";
}



void fun(string str,int l,int n){
    if(l>n) return;
    print(str,l);
    if(l+1<=n)
        for(int i=l;i<n;i++){
            char t=str[l];
            str[l]=str[i];
            str[i]=t;
            fun(str,l+1,n);
        }
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string str;
    cin>>str;
    sort(str.begin(),str.end());
    fun(str,0,str.length());
    return 0;
}
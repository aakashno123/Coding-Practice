#include<bits/stdc++.h>

using namespace std;

int main(){

    string str;
    cin>>str;
    int l=str.length();
    string res="";
    for(int i=0;i<l;i++){
        if(str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'|| str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U'|| str[i]=='Y'|| str[i]=='y') continue;
        else {res+='.';
        res+=tolower(str[i]);}
    }
    cout<<res;
    return 0;
}
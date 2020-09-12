#include<bits/stdc++.h>
using namespace std;



int main()
 {  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    string str;
    getline(cin,str);
    int count=0;
    int len=str.length();
    for(int i=0;i<len-3;i++){ 
        cout<<str[i]<<str[i+1]<<str[i+2]<<"\n";
        if(str[i]=='g' && str[i+1]=='f' && str[i+2]=='g'){ count++;}
    }
    if(count>0) cout<<count<<"\n";
    else cout<<-1<<"\n";
    }
	return 0;
}
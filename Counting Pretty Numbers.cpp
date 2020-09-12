#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,l,r,q,count=0,n;
    register int i;
    scanf("%d",&t);
    while(t--){
        count=0;
        scanf("%d %d",&l,&r);
        for(i=l;i<=r;i++){
            n=i;
            while(n>0){
                q=n%10;
                if(q==2 || q==3 || q==9){ count++; break;}
                n/=10;
            }         
        }
        printf("%d\n",count);
    }
    return 0;
}
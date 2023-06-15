#include<bits/stdc++.h>
using namespace std;
int main(){int t;
cin>>t;
while(t--){ long int a,b,c;
cin>>a>>b>>c;
if(a==1)cout<<1<<endl;
else {long int b2;
    if(c<b){
        b2=b-1;
    }
    else b2=(c-b)+(c-1);
    if(a-1<b2)cout<<1<<endl;
    else if(a-1==b2)cout<<3<<endl;
    else cout<<2<<endl;
 
}
 
 
}
 
}
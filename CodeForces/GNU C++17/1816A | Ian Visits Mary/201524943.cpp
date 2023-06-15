#include<bits/stdc++.h>
using namespace std;
 
 
void solve()
{
 
int x,y;
cin>>x>>y;
if(x==1 && y==1)
{
    cout<<1<<endl;
    cout<<x<<" "<<y<<endl;
}
else 
{
    cout<<2<<endl;
    cout<<x-1<<" " <<1<<endl;
    cout<<x<<" "<<y<<endl;
}
return;
}
 
 
 
int  main(){   
int t;
cin>>t;
while(t--){  
solve();
} 
 
}
        
 
        
 
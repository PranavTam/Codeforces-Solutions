#include<bits/stdc++.h>
using namespace std;
 
 # define ll long long
 
int main(){ 
    
 
 
ll t;
cin>>t;
 
while(t--){  
ll ans=0;
ll n;ll c;
cin>>n;
vector<ll>v(n);
for(ll i=0;i<n;i++)
{
    cin>>v[i];
}
priority_queue<ll>bo;
for(ll i=0;i<n;i++)
{ 
c=v[i];
if(c!=0)
{
   bo.push(c);
}
else
{
 if(!bo.empty())
 {
    ans+=bo.top();
    bo.pop();
 }
}
    
}
cout<<ans<<endl;
 
 
} 
 
}
        
 
        
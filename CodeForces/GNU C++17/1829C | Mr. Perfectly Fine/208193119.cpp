#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define pb push_back
#define mp make_pair
# define endl "\n"
 
#define f0r(i,n) for(int i=0;i<n;i++)
 
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b)  (a/gcd(a,b))*b
 
int32_t main(){ 
    
ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
 
int t;
cin>>t;
while(t--){  
int n,m,m01=INT_MAX,m10=INT_MAX,m11=INT_MAX;
string s;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>m>>s;
if(s=="01")m01=min(m01,m);
else if(s=="10")m10=min(m10,m);
else if(s=="11") m11=min(m11,m);
}
if(m11==INT_MAX && (m10==INT_MAX || m01==INT_MAX))cout<<-1<<endl;
else 
{
    int k=INT_MAX;
  if(m10!=INT_MAX && m01!=INT_MAX)k=m10+m01;
  cout<<min(m11,k)<<endl;
}
 
} 
 
}
        
 
        
 
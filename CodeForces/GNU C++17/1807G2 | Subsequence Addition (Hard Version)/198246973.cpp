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
int n;
cin>>n;
int f=0;
vector<int>c(n,0);
for(int i=0;i<n;i++)cin>>c[i];
sort(c.begin(),c.end());
int s=c[0];
if(c[0]!=1)cout<<"NO"<<endl;
else
{
    for(int i=1;i<n;i++)
    {
        if(c[i]>s)
        {
f=1;cout<<"NO"<<endl;
break;
        }
        s+=c[i];
    }
if(!f)cout<<"YES"<<endl;
}
 
 
} 
 
}
        
 
        
 
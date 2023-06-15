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
int a1,a2,a3,a4;
cin>>a1>>a2>>a3>>a4;
 
if(a1>0)
{
int ans=a1;
int s=min(a2,a3);
ans+=2*s;
a2-=s;a3-=s;
ans+=min(a2+a3+a4,a1+1);
cout<<ans<<endl;
}
else cout<<1<<endl;
 
 
} 
 
}
        
 
        
 
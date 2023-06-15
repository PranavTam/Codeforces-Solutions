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
int n,m;
cin>>n>>m;
int x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
int cnt1=0,cnt2=0;
if(x1-1>=1 )cnt1++;
if(y1-1>=1  )cnt1++;
if(x1+1<=n )cnt1++;
if(  y1+1<=m)cnt1++;
 
if(x2-1>=1 )cnt2++;
if(y2-1>=1 )cnt2++;
if(x2+1<=n )cnt2++;
if( y2+1<=m)cnt2++;
 cout<<min(cnt1,cnt2)<<endl;
 
 
} 
 
}
        
 
        
 
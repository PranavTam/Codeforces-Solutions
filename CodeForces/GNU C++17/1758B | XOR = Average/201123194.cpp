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
if(n%2==1)
{
    while(n--)
    {
        cout<<1<<" ";
    }
}
else
{
 
int k=n,l;
 
n*=n;
n-=k+1;n-=1;
k-=2;l=k;
  while(k--)
    {
        cout<<n/l<<" ";
    }
cout<<l+3<<" "<<1<<" ";
}
 cout<<endl;
} 
 
}
        
 
        
 
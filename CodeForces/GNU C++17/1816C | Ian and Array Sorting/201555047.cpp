#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define pb push_back
#define mp make_pair
# define endl "\n"
 
#define f0r(i,n) for(int i=0;i<n;i++)
 
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b)  (a/gcd(a,b))*b
bool issorted(int ar[],int n)
{
  for(int i=0;i<n-1;i++)
{
    if(ar[i]>ar[i+1])return 0;
 
}  
return 1;
}
 
int32_t main(){ 
    
ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
 
int t;
cin>>t;
while(t--){  
int n;
cin>>n;
int ar[n];
for(int i=0;i<n;i++)
{
    cin>>ar[i];
}
if(n%2==1)cout<<"YES"<<endl;
else{
int c1=0,c2=0;
for(int i=1;i<n-2;i++)
{
  int df=ar[i-1]+c2-ar[i];
  c2=c1;
  c1=df;
 
}
if(ar[n-2]+c1<=ar[n-1])cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
} 
 
}
        
 
        
 
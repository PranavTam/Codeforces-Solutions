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
int o=0;
vector<int>a(n);
 
for(int i=0;i<n;i++)
{
cin>>a[i];
o=o^a[i];
}
 //cout<<o<<endl;
for(int i=0;i<n;i++)
{
 a[i]=a[i]^o;
}
int ans=a[0];
for(int i=1;i<n;i++)
{
 ans=ans^a[i];
}
if(ans==0)cout<<o<<endl;
else cout<<-1<<endl;
 
} 
 
}
        
 
        
 
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
int n,o=0,e=0,m=INT_MAX;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++)
{
  cin>>a[i];
  m=min(m,a[i]);
  if(a[i]%2==0)e++;
  else o++;
}
if(o==0 || e==0)cout<<"YES"<<endl;
else if(m%2==1)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
 
 
 
} 
 
}
        
 
        
 
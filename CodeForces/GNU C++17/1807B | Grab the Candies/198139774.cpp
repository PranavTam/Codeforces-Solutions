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
int c;
int o=0;
int e=0;
 
for(int i=0;i<n;i++)
{
    cin>>c;
    if(c%2==0)e+=c;
    else o+=c;
}
if(e>o)cout<<"YES"<<endl;
else  cout<<"NO"<<endl;
 
 
 
 
} 
 
}
        
 
        
 
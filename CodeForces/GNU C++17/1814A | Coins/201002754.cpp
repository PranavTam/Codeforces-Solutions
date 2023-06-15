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
int n,k;
cin>>n>>k;
bool f=0;
if(n%2==0)f=1;
else if(n%k==0)f=1;
else if(n-k>=0 && (n-k)%2==0)f=1;
else if((n-2*k)>=0 && (n-2*k)%2==0)f=1;
if(f)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
 
 
 
} 
 
}
        
 
        
 
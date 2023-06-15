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
int n,q;
cin>>n>>q;
 
vector<int>a(n,0);
vector<int>odd(n,0);
int as=0;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    as+=a[i];    
    odd[i]=a[i];
}
for(int i=1;i<n;i++)odd[i]=odd[i-1]+a[i];
while(q--)
{
    int l,r,k;
    int ars=as;
    cin>>l>>r>>k;
    int m;
    l--;r--;
     m=odd[r]-(odd[l]-a[l]);
     ars=as-m+(r-l+1)*k;
    
    if(ars%2==0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
 
 
} 
 
}
        
 
        
 
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
vector<int>a(n);
vector<int>ab;
int ans=0;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    ans=gcd(ans,abs(a[i]-(i+1)));
    if(abs(a[i]-(i+1))%k!=0)ab.push_back(abs(a[i]-(i+1)));
}
if(ans%k==0 || k==1)cout<<0<<endl;
else if(ab.size()<=2){
   cout<<1<<endl;
 
}
else cout<<-1<<endl;
 
} 
 
}
        
 
        
 
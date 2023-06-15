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
vector<int>a(n),b(n);
for(int i=0;i<n;i++)cin>>a[i];
for(int i=0;i<n;i++)cin>>b[i];
vector<int>c=a;
sort(c.begin(),c.end());
sort(b.begin(),b.end());
vector<int>ans(n);
map<int,vector<int>>m;
map<int,int>idx;
for(int i=0;i<n;i++){m[c[i]].push_back(b[i]);idx[c[i]]=0;}
for(int i=0;i<n;i++)
{
 ans[i]=(m[a[i]][idx[a[i]]]);
 idx[a[i]]++;
}
 for(int i=0;i<n;i++)cout<<ans[i]<<" ";
 cout<<endl;
 
} 
 
}
        
 
        
 
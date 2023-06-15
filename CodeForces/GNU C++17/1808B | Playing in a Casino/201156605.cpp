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
int n,m,a=0;
cin>>n>>m;
vector<vector<int>>ans(m,vector<int>(n));
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>ans[j][i];
    }
}
 
 
for(auto &i:ans)
{
    sort(i.begin(),i.end());
}
 
for(int i=0;i<m;i++)
{
    int mf=n-1;
    for(int j=n-1;j>=0;j--)
    {
       a+=ans[i][j]*mf;
       mf-=2;
    }
}
cout<<a<<endl;
 
 
} 
 
}
        
 
        
 
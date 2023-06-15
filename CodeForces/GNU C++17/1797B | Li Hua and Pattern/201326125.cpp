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
int n,m,b;
cin>>n>>m;
vector<vector<int>>t(n,vector<int>(n,0));
for(int i=0;i<n;i++)
{
    //vector<int>a;
    for(int j=0;j<n;j++)
    {
        cin>>t[i][j];
    }
  //t.push_back(a);
}
 
 
 
int cnt=0;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(t[i][j]!=t[n-i-1][n-j-1])cnt++;
    }
}
cnt=cnt/2;
if((cnt<=m) && ((cnt-m)%2==0))cout<<"YES"<<endl;
else if((cnt<=m) && (n%2==1))cout<<"YES"<<endl;
else cout<<"NO"<<endl;
 
 
 
 
 
} 
 
}
        
 
        
 
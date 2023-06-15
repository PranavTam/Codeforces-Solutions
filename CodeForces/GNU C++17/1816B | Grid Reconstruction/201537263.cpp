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
vector<vector<int>>ans(2,vector<int>(n,0));
 
int id=2;
for(int i=1;i<n;i+=2){ans[0][i]=id;id+=2;}
id=1;
for(int i=0;i<n;i+=2){ans[1][i]=id;id+=2;}
id=2*n;
for(int i=0;i<n;i+=2){ans[0][i]=id;id-=2;}
id=n+1;
for(int i=1;i<n;i+=2){ans[1][i]=id;id+=2;}
for(int i=0;i<2;i++)
{
    for(int j=0;j<n;j++)
    {
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
 
} 
 
}
        
 
        
 
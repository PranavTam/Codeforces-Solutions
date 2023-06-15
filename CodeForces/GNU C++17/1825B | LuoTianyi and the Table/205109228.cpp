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
int n,m,te;
cin>>n>>m;
te=n*m;
vector<int>v(te);
for(int i=0;i<te;i++)
{
    cin>>v[i];
}
sort(v.begin(),v.end());
int ma=v[v.size()-1],f1=v[0],f2=v[v.size()-2],f3=v[1];
 
int c1=(ma-f1)*(te-min(m,n))+(f2-f1)*(min(m,n)-1);
int c2=(ma-f1)*(te-min(m,n))+(ma-f3)*(min(m,n)-1);
cout<<max(c1,c2)<<endl;
 
 
 
 
 
} 
 
}
        
 
        
 
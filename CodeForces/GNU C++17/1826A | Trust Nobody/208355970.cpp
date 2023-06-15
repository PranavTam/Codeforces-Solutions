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
vector<int>a(n);
for(int i=0;i<n;i++)cin>>a[i];
int cnt=0,f=0;
for(int i=0;i<=n;i++)
{
   cnt=0;
    for(int j=0;j<n;j++)
    {
       if(a[j]>i)cnt++;
    }
    if(cnt==i){f=1;break;}
}
if(f)cout<<cnt<<endl;
else cout<<-1<<endl;
 
} 
 
}
        
 
        
 
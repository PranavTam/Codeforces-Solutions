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
 vector<int>ans;
 for(int i=0;i<n-1;i++)
 {
    int val=a[i]-a[i+1];
    if(val!=0)
    {
        if(ans.size()>0)
      {  int y=ans.back();
        if(y<0 && val>0 )ans.push_back(val);
        else if(y>0 && val<0)ans.push_back(val);
        }
        else ans.push_back(val);
    }
  
 }
 cout<<ans.size()+1<<endl;
 
 
 
 
 
 
} 
 
}
        
 
        
 
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
if(n%2==0)cout<<-1<<endl;
else{
    vector<int>ans;
    while(n!=1 )
    {
        if(((n+1)/2)%2==1){n=(n+1)/2;ans.push_back(1);}
        else  {n=(n-1)/2;ans.push_back(2);}
 
    }
cout<<ans.size()<<endl;
reverse(ans.begin(),ans.end());
for(auto i:ans)
{
    cout<<i<<" ";
}
cout<<endl;
}
 
 
} 
 
}
        
 
        
 
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
 string s;
 cin>>s;
 string t=s;
 sort(t.begin(),t.end());
 char c=t[0];
 int idx;
 for(int i=s.size()-1;i>=0;i--)
 {
    if(s[i]==c){idx=i;break;}
 }
string ans="";
ans+=c;
for(int i=0;i<s.size();i++)
{
  if(i!=idx)ans+=s[i];  
}
cout<<ans<<endl;
 
} 
 
}
        
 
        
 
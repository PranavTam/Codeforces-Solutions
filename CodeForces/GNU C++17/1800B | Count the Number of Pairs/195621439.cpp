#include<bits/stdc++.h>
using namespace std;
 
 
 
int main(){ 
    
ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
 
int t;
cin>>t;
while(t--){ 
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int ans=0;
    int a=0;
vector<int>lo(26,0);
vector<int>up(26,0);
for(int i=0;i<s.size();i++)
{
    if(isupper(s[i]))
    {
        up[s[i]-'A']++;
    }
    else lo[s[i]-'a']++;
}
for(int i=0;i<26;i++)
{
int m=min(lo[i],up[i]);
ans+=m;
lo[i]-=m;up[i]-=m;
a+=lo[i]/2;
a+=up[i]/2;
}
if(a>k)ans+=k;
else ans+=a;
cout<<ans<<endl;
 
 
 
 
 
} 
 
}
        
 
        
 
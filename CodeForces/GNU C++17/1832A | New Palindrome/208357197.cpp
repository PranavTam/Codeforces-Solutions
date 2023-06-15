 
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
string s;
cin>>s;
map<char,int>m;
for(auto i:s)m[i]++;
if(m.size()>2)cout<<"YES"<<endl;
else if(m.size()==2 && s.size()%2==0)cout<<"YES"<<endl;
else if(m.size()==2)
{bool f=0;
    for(auto i :m){
        if(i.second==1)f=1;
    }
    if(f)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
else cout<<"NO"<<endl;
 
 
 
} 
 
}
        
 
        
 
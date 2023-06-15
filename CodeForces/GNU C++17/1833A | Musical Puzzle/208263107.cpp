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
string s;
cin>>n;
cin>>s;
map<string,int>m;
string k="";
k += s[0];k+=s[1];
m[k]++;
char c=s[1];
for(int i=2;i<n;i++)
{
    string k1="";
    k1+=c;
    k1+=s[i];
    m[k1]++;
    c=s[i];
 
}
cout<<m.size()<<endl;
 
 
} 
 
}
        
 
        
 
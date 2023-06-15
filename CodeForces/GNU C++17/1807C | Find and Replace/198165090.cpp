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
bool f=0;
//vector<bool>flag(n,0);
for(int i=0;i<n;i++)
{
    char c=s[i];
    for(int j=0;j<n;j++)
    {
        if(c==s[j])
        {
            if(i%2==0 && j%2!=0){f=1;break;}
            if(i%2!=0 && j%2==0){f=1;break;}
        }
 
    }
}
 if(f)cout<<"NO"<<endl;
 else cout<<"YES"<<endl;
} 
 
}
        
 
        
 
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
int n,m;
cin>>n>>m;
if(m>n)cout<<"NO"<<endl;
else if(m==n)cout<<"YES"<<endl;
else if(n%3!=0)cout<<"NO"<<endl;
else{
    bool f=0;
    queue<int>q;
    q.push(n);
    while(!q.empty())
    {
        int x=q.front();q.pop();
        if(x==m){f=1;break;}
        if(x%3==0)
        {
            int y=x/3;
            if(y>=m)q.push(y);
            if(2*y>=m)q.push(2*y);
        }
    }
    if(f)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
 
 
} 
 
}
        
 
        
 
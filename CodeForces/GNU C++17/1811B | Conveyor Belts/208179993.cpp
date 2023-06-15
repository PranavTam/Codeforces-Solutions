 #include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define pb push_back
#define mp make_pair
# define endl "\n"
 
#define f0r(i,n) for(int i=0;i<n;i++)
 
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b)  (a/gcd(a,b))*b
int fun(int n,int x,int y)
{
int ans,a,b;
a=n-x+1;b=n-y+1;
    if(x>=y && x<=n-y+1)return y;
    if(y>=x && y<=n-x+1)return x;
    if(x>=b && x<=y)return b;
    return a;
}
 
int32_t main(){ 
    
ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
 
int t;
cin>>t;
while(t--){  
int n,x1,y1,x2,y2,a,b;
cin>>n>>x1>>y1>>x2>>y2;
a=fun(n,x1,y1);
b=fun(n,x2,y2);
cout<<abs(a-b)<<endl;
 
} 
 
}
        
 
        
 
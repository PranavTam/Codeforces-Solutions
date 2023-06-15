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
if(n==1)cout<<1<<endl;
else if(n%2==1)cout<<-1<<endl;
else{
vector<int>a(n);
for(int i=0;i<n;i++)a[i]=i+1;
for(int i=1;i<n;i+=2)
{
    swap(a[i],a[i-1]);
}
for(int i=0;i<n;i++)cout<<a[i]<<" ";
cout<<endl;
}
 
} 
 
}
        
 
        
 
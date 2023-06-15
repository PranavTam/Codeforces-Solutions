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
 if(n%2==0)cout<<"NO"<<endl;
 else
 {
    cout<<"YES"<<endl;
    vector<int>t(n);
    t[0]=2*n+1;
    int s=1,e=n-1;
    int a1=t[0]-1,a2=t[0]+1;
    while(s<e)
    {
        t[s]=a1;t[e]=a2;
        a1--;a2++;s++;e--;
 
    }
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" "<<t[i-1]-i<<endl;
    }
 }
 
} 
 
}
        
 
        
 
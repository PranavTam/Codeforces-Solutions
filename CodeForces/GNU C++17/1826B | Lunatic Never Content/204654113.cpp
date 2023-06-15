 #include<bits/stdc++.h>
using namespace std;
 
#define int long long
 
 
int32_t main(){ 
 
int t;
cin>>t;
while(t--){  
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++)cin>>arr[i];
int ans=0;
int  i=0,j=n-1;
while(i<j)
{
    int a=abs(arr[i]-arr[j]);
    ans=__gcd(a,ans);i++;j--;
 
}
cout<<ans<<endl;
 
 
 
} 
 
}
        
 
        
 
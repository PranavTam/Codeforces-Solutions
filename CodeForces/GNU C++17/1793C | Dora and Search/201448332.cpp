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
int mi=1,ma=n;
vector<int>a(n);
for(int i=0;i<n;i++)
{cin>>a[i];}
 int i=0,j=n-1;
 bool f1=0,f2=0,f3=0;
 while(i<j)
 {
    if(a[i]==mi){mi++;i++;f1=0;}
    else if(a[i]==ma){ma--;i++;f1=0;}
    else{f1=1;}
    if(a[j]==ma){ma--;j--;f2=0;}
    else if(a[j]==mi){mi++;j--;f2=0;}
    else {f2=1;}
    if(f1*f2){f3=1;break;}
    
 }
 if(f3==1 && i<=j-1)
 {
    cout<<i+1<<" "<<j+1<<endl;
 }
 else cout<<-1<<endl;
} 
 
}
        
 
        
 
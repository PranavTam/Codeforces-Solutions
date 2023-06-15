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
int q;
cin>>q;
bool fl=0;
vector<int>ans;
int fir,prev,a;
cin>>fir;
prev=fir;
ans.push_back(1);
for(int i=1;i<q;i++)
{
   cin>>a;
   if(a>=prev && fl==0){ans.push_back(1);prev=a;}
   else if(a>=prev && fl==1)
   {
    if(a<=fir){ans.push_back(1);prev=a;fl=1;}
    else{ans.push_back(0);}
   }
   if(a<prev && fl==0)
   {
    if(a<=fir){ans.push_back(1);prev=a;fl=1;}
    else{ans.push_back(0);}
   }
   else if(a<prev && fl==1)
   {
     
    ans.push_back(0);
   }
}
for(int i=0;i<ans.size();i++)
{
    cout<<ans[i];
}cout<<endl;
 
} 
 
}
        
 
        
 
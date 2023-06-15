#include<bits/stdc++.h>
using namespace std;
 
int main(){ 
    
ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
 
int t;
cin>>t;
while(t--){  
int n,f=0;
cin>>n;
string s1="",s2="";
string s;
for(int i=0;i<2*n-2;i++)
{
    cin>>s;
    if(s.size()==n-1 && f==0)
    {
        s1=s;f=1;
    }
   else if(s.size()==n-1 && f==1)
   {
    s2=s;
   }
    
 
}
reverse(s1.begin(),s1.end());
if(s1==s2)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
 
} 
 
}
        
 
        
 
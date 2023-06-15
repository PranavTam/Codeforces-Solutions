#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int t;
cin>>t;
while(t--){  
string s;
cin>>s;
int cnt=0;
for(int i=0;i<s.size();i++)
{
    if(s[i]==s[0])cnt++;
}
 
 
if(cnt==s.size())cout<<-1<<endl;
else cout<<s.size()-1<<endl;
 
} 
 
}
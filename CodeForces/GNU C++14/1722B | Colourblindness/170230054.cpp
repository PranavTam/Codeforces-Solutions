 #include <iostream>
using namespace std;
int main(){int t;
cin>>t;
while(t--){
    int n,a=0;
    cin >> n;
    string s,v;
    cin>>s>>v;
    for(int i=0;i<n;i++){
        if(s[i]==v[i] || s[i]=='G'&&v[i]=='B' || s[i]=='B'&&v[i]=='G' )a++;
    }
   if(a==n)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
 
 
}}
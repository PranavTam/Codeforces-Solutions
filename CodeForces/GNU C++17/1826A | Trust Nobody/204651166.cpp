#include<bits/stdc++.h>
using namespace std;
 
int  main(){
int t;
cin>>t;
while(t--){  
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
sort(arr,arr+n);
if(arr[0]==0 && arr[n-1]==0)cout<<0<<endl;
else if(arr[0]==n)cout<<-1<<endl;
else
{int ans=-1;  
for(int i=0;i<n;i++)
{
    int cnt=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]>i)cnt++;
    }
    if(cnt==i)ans=cnt;
}
cout<<ans<<endl;
}
 
 
} 
 
}
        
 
        
 
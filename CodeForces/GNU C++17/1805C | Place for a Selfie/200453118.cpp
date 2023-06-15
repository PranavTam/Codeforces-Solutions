#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define pb push_back
#define mp make_pair
# define endl "\n"
 
#define f0r(i,n) for(int i=0;i<n;i++)
 
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b)  (a/gcd(a,b))*b
 
int searchInsert(vector<int>& nums, int target) {
    int start = 0 , end = nums.size()-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if (nums[mid]>target){
            end = mid-1;
        }
        else{
            start = mid + 1;
        }
    }
        return end+1;
 
        
    }
 
int32_t main(){ 
    
ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
 
int t;
cin>>t;
while(t--){  
int n,m;
cin>>n>>m;
vector<int>l(n);
vector<pair<int,int>>p(m);
for(int i=0;i<n;i++ )cin>>l[i];
int a,b,c;
for(int i=0;i<m;i++ )
{
    cin>>a>>b>>c;
    p[i]={b,4*a*c};
}
sort(l.begin(),l.end());
vector<vector<int>>ans;
for(auto i:p)
{bool f=0;
     int ze;
    ze=(l[0]-i.first)*(l[0]-i.first);
         if(ze-i.second<0)
         {
            f=1;
            ans.push_back({1,l[0]});
         }
    if(f==0)
         {
        ze=(l[n-1]-i.first)*(l[n-1]-i.first);
         if(ze-i.second<0)
         {
            f=1;
            ans.push_back({1,l[n-1]});
         }
         }
    if(f==0)
         {
        if(n%2==1)
        {ze=(l[(n)/2]-i.first)*(l[(n)/2]-i.first);
         if(ze-i.second<0)
         {
            f=1;
            ans.push_back({1,l[(n)/2]});
         }
         }
         else{
            ze=(l[(n)/2]-i.first)*(l[(n)/2]-i.first);
         if(ze-i.second<0)
         {
            f=1;
            ans.push_back({1,l[(n)/2]});
         }
         if(f==0)
         {
        ze=(l[(n)/2-1]-i.first)*(l[(n)/2-1]-i.first);
         if(ze-i.second<0)
         {
            f=1;
            ans.push_back({1,l[(n)/2-1]});
         }
         }
         }
         }
 
    if(f==0)
    {
 
    int mid=searchInsert(l,i.first);
if(mid>=0 && mid<n)
    {   ze=(l[mid]-i.first)*(l[mid]-i.first);
         if(ze-i.second<0)
         {
            f=1;
            ans.push_back({1,l[mid]});
         } 
    }
    mid--;
     if(f==0 && mid>=0)
         {
         ze=(l[mid]-i.first)*(l[mid]-i.first);
         if(ze-i.second<0)
         {
            f=1;
            ans.push_back({1,l[mid]});
         } 
         }
    mid+=2;
       if(f==0 && mid<n)
         {
         ze=(l[mid]-i.first)*(l[mid]-i.first);
         if(ze-i.second<0)
         {
            f=1;
            ans.push_back({1,l[mid]});
         } 
         }
 
 
    }
    
      
 
if(f==0)ans.push_back({0});
 
}
for(auto i:ans)
{
    if(i.size()==2)
    {
        cout<<"YES"<<endl;
        cout<<i[1]<<endl;
    }
    else cout<<"NO"<<endl;
}
 cout<<endl;
 
} 
 
}
        
 
        
 
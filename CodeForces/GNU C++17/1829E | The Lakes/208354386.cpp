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
int n,m;
cin>>n>>m;
vector<vector<int>>mat(n,vector<int>(m));
vector<vector<bool>>vi(n,vector<bool>(m));
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)cin>>mat[i][j];
    
}
vector<int>drows={-1,0,1,0};
vector<int>dcols={0,1,0,-1};
int ans=INT_MIN;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(mat[i][j]!=0 && vi[i][j]==0)
        {int cnt=0;
            queue<pair<int,int>>q;
            q.push({i,j});
            cnt+=mat[i][j];
            vi[i][j]=1;
            while(!q.empty())
            {
                int x=q.front().first,y=q.front().second;q.pop();
                for(int k=0;k<4;k++)
                {
                    int nx=x+drows[k],ny=y+dcols[k];
                    if(nx>=0 && nx<n && ny>=0 && ny<m && mat[nx][ny]!=0 && vi[nx][ny]==0)
                    {
                        q.push({nx,ny});vi[nx][ny]=1;cnt+=mat[nx][ny];
                    }
 
                }
            }
            ans=max(ans,cnt);
        }
    }
}
int p=0;
ans=max(p,ans);
 cout<<ans<<endl;
} 
 
}
        
 
        
 
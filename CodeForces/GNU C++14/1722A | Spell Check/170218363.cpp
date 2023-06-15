#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,T=0,i=0,m=0,u=0,r=0;
        cin>>n;
        string s;
        cin>>s;
        if(n!=5)cout<<"NO"<<endl;
        else {
           for(int j=0;j<5;j++) {char c=s[j];
           switch (c){
            case 'T':
            T++;
            break;
            case 'i':
            i++;
            break;
            case 'm':
            m++;
            break;
            case 'u':
            u++;
            break;
            case 'r':
            r++;
            break;
           }
           }
if(T==1 && i==1 && m==1 && u==1 &&r==1 )cout<<"YES"<<endl;
else cout<<"NO"<<endl;
        }
      
         
       
    }
}
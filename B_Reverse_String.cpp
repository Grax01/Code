#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define llu long long unsigned
#define F first
#define S second
#define pb push_back
string findRev(string a,int i,int j)
{
   
   a=a.substr(i,j);
reverse(a.begin(),a.end());
return a;
}
void solve()
{
 string s,s1;
 cin>>s>>s1;
 int l,l1,i,j;
 l=s.length();
 l1=s1.length;
 for(i=0;i<l;i++)
 {
  for(j=l-i;j>0;j--)
  {
   if((s.substr(i,j)==s1.substr(0,j)))
   {
     if(j==l1)
     {
       cout<<"YES"<<endl;
       return;
     }
    if(i+2*j-l1>0&&l1-j>-1)
     if(s.substr(i+j-(l1-(j-1)),l1-j)==findRev(s1,j,l1-j))
     {
       cout<<"YES"<<endl;
       return;
     }
   }
  }
 } 
 cout<<"NO"<<endl; 
}
int main()
{
  long int t;
  cin>>t;
  while(t--)
  {
     solve();
  }
}

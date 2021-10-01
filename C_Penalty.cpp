#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define llu long long unsigned
#define F first
#define S second
#define pb push_back
void solve()
{
    int i,fi=0,se=0,m=20;
   string s;
   cin>>s;
   for(i=0;i<10;i++)
   {
       if(i%2==0){
   if(s[i]=='1'||s[i]=='?')
   ++fi;
       }
   else {
       if(s[i]=='1')
       ++se;
   }
   if(fi-se>ceil((9-i)/2.0))
   {
       m=i;
       break;
   }
   }
   fi=0;
   se=0;
   for(i=0;i<10;i++)
   {
       if(i%2!=0){
   if(s[i]=='1'||s[i]=='?')
   ++se;
       }
   else {
       if(s[i]=='1')
       ++fi;
   }
   if(se-fi>(9-i)/2)
   {
       m=min(i,m);
       break;
   }


   }
 if(m>10){
 cout<<"10"<<endl;
 return;
    }   cout<<m+1<<endl;
   }
   }
int main()
{
  long int t,n;
  cin>>t;
  while(t--)
  {
     solve();
  }
}

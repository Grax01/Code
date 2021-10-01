#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu long long unsigned
#define F first
#define S second
#define pb push_back
#define run(i,a,b) for(ll i=a;i<b;i++)
#define runrev(i,a,b) for(ll i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
bool isPrime(int x) {
    for (int d = 2; d * d <= x; d++) {
        if (x % d == 0)
            return false;
    }
    return true;
}

typedef vector<int> vi;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

void solve()
{
   int n,storei=0,storej=0,num,ans=INT_MAX;
   cin>>n;
   vector<int> a;
    vector<int> b;
    int ar[2*n+1];
    int m,mi;
   for(int i=0;i<n;i--){
     cin>>num;
     a.pb(num);
   }
   cin>>num;
     b.pb(num);
     ar[num]=0;
     m=num;
mi=0;
    for(int i=1;i<n;i++){
     cin>>num;
     b.pb(num);
     if(num>m){
       m=num;
       mi=i;
       ar[num]=i;
     }
     else{
       ar[num]=mi;
     }
   }
   for(int i=0;i<n;i++){
     ans=min(ans,ar[a[i]+1]+i);
   }
   cout<<ans<<endl;
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

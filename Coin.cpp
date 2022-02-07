                                   //BAAP IZ HERE//
/*
 KABILAN . M
 PRATICE IS THE ONLY SHORTCUT TO SUCCESS
 IIT GUWAHATI 
*/
 
#include <bits/stdc++.h>

#pragma GCC optimize("-Ofast")
//#pragma GCC optimize("trapv")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,sse4.2,popcnt,abm,mmx,avx2,tune=native")
#pragma GCC optimize("-ffast-math")
#pragma GCC optimize("-funroll-loops")
#pragma GCC optimize("-funroll-all-loops,-fpeel-loops,-funswitch-loops")

using namespace std;
#define ff first
#define ss second
#define sb substr
#define all(v) v.begin(),v.end()
#define ll long long int
#define ull unsigned long long int
#define pi   pair <ll, ll>
#define ppi pair<ll,pair<ll,ll>>
#define db double
#define bits(n) __builtin_popcountll(n)
#define prec(n) fixed<<setprecision(n)
#define pb(x) push_back(x)
#define getunique(v) {sort(all(v)); v.erase(unique(all(v)), v.end());}
#define fast     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ln "\n"
#define vi vector<ll>

#define forl(i,n) for(ll i = 0; i < n; i++)    
#define deb(x) cout << #x << "=" << x << endl
#define p0(a) cout << a << " "
#define p1(a) cout << a << ln
#define p2(a,b) cout << a << " " << b << ln
#define p3(a,b,c) cout << a << " " << b << " " << c << ln
#define p4(a,b,c,d) cout << a << " " << b << " " << c << " " << d << ln


const int maxN = 1e5+5;
const int MOD = 1e9+7;




void solve()  {            
  //cout<<"NEVER GIVE UP"<<ln;
  ll n;
  cin >> n;
  vector<double> dp(n+1);
  // dp[heads], tail = 1 - head;
  // dp[i] .. prob. that there are i head so far.
  dp[0] = 1; /* BASE CONDITION */
  // prob of having 0 head is 1.
  for(int coin=1;coin<=n;coin++){
    double p_head;
    cin >> p_head;
    for(int i=coin;i>=0;i--){ // going upto "0" heads
      dp[i] = (i == 0 ? 0 : dp[i-1]*p_head) // i-1 head from prev and consider current p_head
              + dp[i]*(1-p_head); // if i is tail then dp[i]*(1-p_head) --> prob of i head so far
    }
  }
  double ans = 0;
  for(int head=0;head<=n;head++){
    int tail = n - head; // we want more head than tail prob
    if(head > tail){
      ans += dp[head];
    }
  }
  cout<<prec(10)<<ans<<ln;
return;
}


int main(){
    fast;
    ll t=1;
   // cin>>t; 
    while(t--){
      solve();
    }
   return 0;
 }



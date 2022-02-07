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
#define INF LLONG_MAX
#define vi vector<ll>

#define forl(i,n) for(ll i = 0; i < n; i++)    
#define deb(x) cout << #x << "=" << x << endl
#define p0(a) cout << a << " "
#define p1(a) cout << a << ln
#define p2(a,b) cout << a << " " << b << ln
#define p3(a,b,c) cout << a << " " << b << " " << c << ln
#define p4(a,b,c,d) cout << a << " " << b << " " << c << " " << d << ln

int const M = 2e5 + 5; // 5e8+5
const ll mod = 1e9+7; //998244353;




void solve()  {            
 //cout<<"NEVER GIVE UP"<<ln;
 ll n;
 cin >> n;
 ll a[n];
 forl(i,n){
  cin >> a[i];
 }
 vector<ll> dp(n,INT_MAX);
 // dp[i] = min. cost to travel to the i'th state.
 dp[0] = 0;
 for(int i=1;i<n;i++){
  ll v1 = (i-1 >= 0 ? dp[i-1] + abs(a[i]-a[i-1]) : INT_MAX);
  ll v2 = (i-2 >= 0 ? dp[i-2] + abs(a[i]-a[i-2]) : INT_MAX);
  dp[i] = min({dp[i],v1,v2});
 }

 p1(dp[n-1]);
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



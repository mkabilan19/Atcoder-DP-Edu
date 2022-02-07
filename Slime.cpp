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


const int maxN = 405;
const int M = 1e9+7;
const ll INF = 1e18L+5;
ll dp[maxN][maxN];

void min_self(ll &a,ll b){
  a = min(a,b);
}



void solve()  {            
  //cout<<"NEVER GIVE UP"<<ln;
  ll n;
  cin >> n;
  ll a[n];
  for(auto &x : a) cin >> x;
    // same as function called above solve
  auto sum = [&](int l,int r){
    ll s = 0;
    for(int i=l;i<=r;i++) {
      s += a[i];
    }
    return s;
  };
  // dp on continues segments
  // o(n^3) --> TC
  // dp[l][r] = the minimum total cost of combining interval [i,j] into one interval
  for(int l=n-1;l>=0;l--){
    for(int r=l;r<n;r++){
      if(l == r){
        dp[l][r] = 0;
      }else{
        dp[l][r] = INF;
        ll s = sum(l,r);
        for(int i=l;i<=r-1;i++){
          min_self(dp[l][r],dp[l][i]+dp[i+1][r]+s);
        }
      }
    }
  }  
  p1(dp[0][n-1]);
  
  
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


